
create table donate(
	id int identity(1,1),
	price money,
	payday date ,
primary key (id) 

)
create table orders(
		
		id int identity(1,1) primary key,
		price money,
		state_ bit, 
		conclusion_date date,
		payment_date date,
		donate_ID int ,
		penalty money,
		FOREIGN KEY (donate_ID) references donate(id),
	
		
)
create table bank(
	id int, 
	conditional_number int,
	name_ varchar (40),
	primary key (id) 
)
create table checking_account(
	bank_id int,
	id int identity(1,1),
	networth money,
	check (networth>0),
	FOREIGN KEY (bank_id) references bank(id),
	primary key (id) 
)
create table transport (
	id int identity(1,1),
	nametype varchar(20),
	load_capacity int ,
primary key (id) 

)
create table loading_points(
	id int identity(1,1),
	addres varchar(30),
	primary key (id) 

)
create table passportDP (
id int identity(1,1),
	addres varchar(30),
	primary key (id) 
)

create table contragent(
	id int identity(1,1),
	client bit,
	order_id int,
	transport_id int,
	passportdp_id int,
	loading_points_id int,
	donate_id int,
	checking_id int,
	
	FOREIGN KEY (donate_id) references donate(id),
	
	FOREIGN KEY (transport_id) references transport(id),
	
	FOREIGN KEY (checking_id) references checking_account(id),
	
	FOREIGN KEY (loading_points_id) references loading_points(id),
	primary key (id)

)