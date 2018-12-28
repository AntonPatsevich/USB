<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <html>
  <body>
    <table style="border: 1px solid black;">
    <caption align="left">Вариант 8</caption>
    <tr style="border: 1px solid black;" bgcolor="purple">
      <th style="vertical-align:top; border: 1px solid black; width:50px; height:50px; padding-top:13px;" align="center">Наименование</th>
      <th style="vertical-align:top; border: 1px solid black; padding-top:13px;" align="center">Месяц</th>
      <th style="vertical-align:top; border: 1px solid black; padding-top:13px;" align="center">День</th>
      <th style="vertical-align:top; border: 1px solid black; padding-top:13px; width:70px;" align="center">Склад</th>
      <th style="vertical-align:top; border: 1px solid black; padding-top:13px; width:100px;" align="center">Продано</th>
      <th style="vertical-align:top; border: 1px solid black; padding-top:13px; width:90px;" align="center">Менеджер</th>
      <th style="vertical-align:top; border: 1px solid black; padding-top:13px; width:90px;" align="center">Заказчик</th>
    </tr>
    <xsl:for-each select="timetable/inco">
    <tr>
      <td style="border: 1px solid black;"><xsl:value-of select="Наименование"/></td>
      <td style="border: 1px solid black; padding-right:40px;"><xsl:value-of select="Месяц"/></td>
      <td style="border: 1px solid black;" align="right"><xsl:value-of select="День"/></td>
      <td style="border: 1px solid black;" align="center"><xsl:value-of select="Склад"/></td>
      <td style="border: 1px solid black;" align="right"><xsl:value-of select="Продано"/></td>
      <td style="border: 1px solid black;"><xsl:value-of select="Менеджер"/></td>
      <td style="border: 1px solid black;"><xsl:value-of select="Заказчик"/></td>
    </tr>
     </xsl:for-each>
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>



