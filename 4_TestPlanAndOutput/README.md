## Table no: High Level test plan

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|H\_01|Calculation of bill in city|Choice|SUCCESS|SUCCESS|
|H\_02|Calculation of bill in village|Choice|SUCCESS|SUCCESS|
|H\_03|Number of units consumed every month|Choice|SUCCESS|SUCCESS|
|H\_04|Calculates total load consumed|Choice|SUCCESS|SUCCESS|

## Table no: Low Level test plan

|Test ID|HL\_ID|Description|Exp input|Exp Output|Actual Output|
| :- | :- | :- | :- | :- | :- |
|L\_01|H\_01|Calculation of bill in city if(units<30)|15 units|59.25 rupees|59.25 rupees|
|L\_02|H\_01|Calculation of bill in city if(units>30 && units <100)|55|299.75|299.75|
|L\_03|H\_01|Calculation of bill in city if(units>101 && units <200)|175|1,225|1,225|
|L\_04|H\_01|Calculation of bill in city if(units<200)|250|2,012.5|2,012.5|
|L\_05|H\_02|Calculation of bill in village if(units<30)|12|<p>37.8</p><p></p>|<p>37.8</p><p></p>|
|L\_06|H\_02|Calculation of bill in village if(units>30 && units <100)|75|386.25|386.25|
|L\_07|H\_02|Calculation of bill in village if(units>101 && units <200)|150|1,005|1,005|
|L\_08|H\_02|Calculation of bill in village if(units<200)|350|2,642.5|2,642.5|
