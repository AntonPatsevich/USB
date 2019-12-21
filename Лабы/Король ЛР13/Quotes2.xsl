<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="1.0"
      xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:template match="/">
      <html>
      <body>
        <h1 style="background-color: Brown; color: white;              font-size: 24pt; text-align: center; letter-spacing: 1.0em">
          Мастера Афоризма
        </h1>
        <xsl:for-each select="Quotes/Quote">
            <xsl:value-of select="Text"/>
          <br/>
            <xsl:value-of select="Author"/>
          <hr width="70%"/>
          </xsl:for-each>
      </body>
      </html>
  </xsl:template>
  </xsl:stylesheet>

