<?xml version="1.0" encoding="ISO-8859-1"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<body>
    <table border="1">
    <tr bgcolor="Gray">
      <th align="center">№</th>
      <th align="center">Предмет счета</th>
      <th align="center">Цена</th>
      <th align="center">Кол-во</th>
      <th align="center">Сумма</th>
    </tr>
    <xsl:for-each select="computer/element">
    <tr>
      <td><xsl:value-of select="number"/></td>
      <td><xsl:value-of select="name"/></td>
      <td><xsl:value-of select="price"/></td>
      <td><xsl:value-of select="count"/></td>
      <td><xsl:value-of select="summa"/></td>
      </tr>
    </xsl:for-each>
    </table>
 </body>
 </html>
</xsl:template>
</xsl:stylesheet>
