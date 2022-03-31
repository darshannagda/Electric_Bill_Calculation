## Table no: High Level test plan

|**Test ID**|**Explanation**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|H\_01|Calculation of bill in city|Option|YES| YES |
|H\_02|Calculation of bill in village| Option | YES | YES |
|H\_03|Number of units consumed every month| Option | YES | YES |
|H\_04|Calculates total load consumed| Option | YES | YES |

## Table no: Low Level test plan

|Test ID|HL\_ID|Description|Exp input|Exp Output|Actual Output|
| :- | :- | :- | :- | :- | :- |
|L\_01|H\_01|Calculation of bill in city if(Current<30)|15|59.25|59.25|
|L\_02|H\_01|Calculation of bill in city if(Current >30 && Current <100)|55|299.75|299.75|
|L\_03|H\_01|Calculation of bill in city if(Current >101 && Current <200)|175|1,225|1,225|
|L\_04|H\_01|Calculation of bill in city if(Current <200)|250|2,012.5|2,012.5|
|L\_05|H\_02|Calculation of bill in village if(Current <30)|12|46.8|46.8|
|L\_06|H\_02|Calculation of bill in village if(Current >30 && Current <100)|75|386.25|386.25|
|L\_07|H\_02|Calculation of bill in village if(Current >101 && Current <200)|150|1,005|1,005|
|L\_08|H\_02|Calculation of bill in village if(Current <200)|350|2,642.5|2,642.5|


