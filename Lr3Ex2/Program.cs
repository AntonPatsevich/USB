using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lr3Ex2
{
    class triangle
    {
        public double firstside, secondside, thirdside, degree_between;

        public void input ()
        {
            Console.Write("Введите длину стороны 1: ");
            firstside = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введите длину стороны 2: ");
            secondside = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введите угол между ними: ");
            degree_between = Convert.ToDouble(Console.ReadLine());
        }

        public void uvelich_umensh ()
        {
            double percent, temp, new_deg;
            int key;
            
            Console.Write("Угол до изменения: {0}", degree_between);
            Console.Write("\nВведите процент: ");
            percent = Convert.ToDouble(Console.ReadLine());
            temp = degree_between * percent / 100;

            Console.Write("1 - Увеличение; 2 - Уменьшение");
            Console.Write("\nВыберите действие:");
            key = Convert.ToInt32(Console.ReadLine());
            switch (key)
            {
            case 1:
                Console.Write("\nУвеличение...");
                    new_deg = degree_between + temp;
                    degree_between = new_deg;
                    Console.Write("\nУгол после увеличения:{0} ", degree_between);
                    break;
                case 2:
                    Console.Write("Уменьшение...");
                    new_deg = degree_between - temp;
                    degree_between = new_deg;
                    Console.Write("\nУгол после уменьшения:{0} ", degree_between);
                    break;
                default:
            break;
              }
                

            
        }
        public void vid_triangle()
        {
            Console.Write("\nУзнаем вид треугольника:");

            thirdside = Math.Sqrt((Math.Pow(firstside, 2) + Math.Pow(secondside, 2) - 2 * firstside * secondside*Math.Cos(degree_between)));
            Console.Write("\nЖопка:", firstside);
            Console.Write("Третья сторона:{0}", thirdside);
            if (firstside == secondside && firstside == thirdside && secondside == thirdside)
            {
                Console.Write("Треугольник равносторонний");
            }
            else if (firstside == secondside || firstside == thirdside || secondside == thirdside)
            {
                Console.Write("Треугольник равнобедренный");
            }
            else if (firstside != secondside && firstside != thirdside && secondside != thirdside)
            {
                Console.Write("Треугольник разносторонний");
            }

        }
        public void znach_uglov()
        {
            double f_ug, s_ug, t_ug;
            f_ug = Math.Pow(firstside,2)+Math.Pow(thirdside,2) - Math.Pow(secondside, 2) / 2 *firstside*thirdside;
            s_ug = Math.Pow(firstside, 2) + Math.Pow(secondside, 2) -Math.Pow(thirdside, 2) / 2 * firstside * secondside;
            t_ug = Math.Pow(secondside, 2) + Math.Pow(thirdside, 2) - Math.Pow(firstside, 2) / 2 * secondside * thirdside;

            Console.Write("\nУгол альфа: {0}; Угол бета:{1}; Угол гамма: {2}.", f_ug, s_ug, t_ug);
        }
        public void okruzh ()
        {
            double r_small, r_big, l;
            Console.Write("\nВведите радиус вписанной окружности");
            r_small = Convert.ToDouble(Console.ReadLine());
            Console.Write("\nВведите радиус описанной окружности");
            r_big = Convert.ToDouble(Console.ReadLine());

            l = Math.Pow(r_big, 2) - 2 * r_big * r_small;

            Console.Write("Расстояние от центра вписанной, до центра описанной окружности:{0}", l);
        }

    }

    class Program
    {
        static void Main(string[] args)
        {
            triangle tr = new triangle();
            tr.input();
            tr.uvelich_umensh();
            tr.vid_triangle();
            tr.znach_uglov();
            tr.okruzh();
            Console.ReadLine();

        }
    }
}
