<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
  <html>
  <body>
    <h2>The list of passengers</h2>
    <table border="1">
    <tr bgcolor="#a5abfa">
      <td align="left">Пассажир</td>
      <td align="left">Вагон</td>
      <td align="left">Место</td>
      <td align="left">Тип вагона</td>
      <td align="left">Отправление</td>
      <td align="left">Прибытие</td>
      <td align="left">Кол-во мест в вагоне</td>
      <td align="left">Цена билета</td>
      <td align="left">Направление</td>
      <td align="left">Пункт назначения</td>
    </tr>
    <xsl:for-each select="tikets/passengers/pass">
    <tr>
      <td><xsl:value-of select="passenger"/></td>
      <td><xsl:value-of select="carriage"/></td>
      <td><xsl:value-of select="place"/></td>
      <td><xsl:value-of select="typecarriage"/></td>
      <td><xsl:value-of select="departure"/></td>
      <td><xsl:value-of select="arriaval"/></td>
      <td><xsl:value-of select="numberplaces"/></td>
      <td><xsl:value-of select="price"/></td>
      <td><xsl:value-of select="side"/></td>
      <td><xsl:value-of select="endpoint"/></td>
    </tr>
    </xsl:for-each>
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>
