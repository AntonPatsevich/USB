<?xml version="1.0" encoding="utf-8"?> 
  <xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" 
    version="1.0"> 
    <xsl:template match="/"> 
      <html> 
        <body> 
          <h1 style="background-color: RoyalBlue; color: white; 
             font-size: 24pt; text-align: center; letter-spacing: 1.0em"> 
            Известные цитаты 
          </h1> 
          <table border="0"> 
            <tr style="font-size: 12pt; font-family: verdana; 
              font-weight: bold"> 
              <td style="text-align: center">Цитата</td> 
              <td style="text-align: center">Автор</td> 
            </tr> 
            <xsl:for-each select="Quotes/Quote"> 
              <xsl:sort select="Author" /> 
              <tr style="font-size: 10pt; font-family: verdana"> 
                <td> 
                  <xsl:value-of select="Text"/></td> 
                <td> 
                  <xsl:choose> 
                    <xsl:when test="Author='Марк Твен'"> 
                      <img src="http://www.tvkultura.ru/p/q_14406.jpg"></img> 
                    </xsl:when> 
                    <xsl:otherwise> 
                    <i><xsl:value-of select="Author"/></i> 
                    </xsl:otherwise> 
                  </xsl:choose> 
                </td> 
              </tr> 
            </xsl:for-each> 
          </table> 
        </body> 
      </html> 
    </xsl:template> 
  </xsl:stylesheet>
