<?xml version="1.0" encoding="ISO-8859-1"?>

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
  <html>
  <body>
    Договор
    <table border="1">
    <tr bgcolor="#a5abfa">
      <th align="center" rowspan=2>Наименование</th>
      <th align="center"colspan=2>Дубовые</th>
      <th align="center"colspan=2>Сосновые</th>
      <th align="center"rowspan=2>Итого</th>

    </tr>
    <tr>
    <th align="center">Столы</th>
    <th align="center">Стулья</th>
    <th align="center">Столы</th>
    <th align="center">Стулья</th>
    </tr>
    <xsl:for-each select="timetable/lesson">
    <tr>
      <td><xsl:value-of select="timeFrom"/></td>
      <td><xsl:value-of select="subject"/></td>
      <td><xsl:value-of select="teacher"/></td>
    </tr>
    </xsl:for-each>
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>