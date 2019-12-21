<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
  <html>
  <body>
    <table border="1">
    <caption align="left">Доходы</caption>
    <tr bgcolor="grey">
      <th align="center" rowspan="2">Наименование</th>
      <th align="center" colspan="2">Дубовые</th>
      <th align="center" colspan="2">Сосновые</th>
      <th align="center" rowspan="2">Итого</th>
    </tr>
    <tr bgcolor="grey">
    <th>Столы</th>
    <th>Стулья</th>
    <th>Столы</th>
    <th>Стулья</th>
    </tr>
    <xsl:for-each select="mebel/category">
    <tr>
      <td><xsl:value-of select="name"/></td>
      <td><xsl:value-of select="tables"/></td>
      <td><xsl:value-of select="chairs"/></td>
      <td><xsl:value-of select="tables"/></td>
      <td><xsl:value-of select="chairs"/></td>
      <td><xsl:value-of select="itogo"/></td>
    </tr>
     </xsl:for-each>
    </table>
  </body>
  </html>
</xsl:template>
</xsl:stylesheet>

