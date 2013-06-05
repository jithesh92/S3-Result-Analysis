NUMBER=69
SUBJECTS=8
EXPORT=exportToExcel.txt

function Process
{
	name=`grep B.Tech. Individual | cut -f2 -d:`
	rollno=`grep REGISTER Individual | cut -f2 -d:`
	let temp=$SUBJECTS*2
	grades=`grep " Grade "  -x -A $temp Individual`
	echo -n "$rollno : $name " >> $EXPORT
	for ((j=2;j<=$SUBJECTS+1;j++))
	do
		grade=`echo $grades | cut -f$j -d" "`
		echo -n ": $grade " >> $EXPORT
	done
	sgpa=`grep SGPA Individual | cut -f2 -d:`
	echo  : $sgpa >> $EXPORT
}

function convert
{
	pdftotext -o "file($i).pdf" , Individual
	if [[ -z `grep Warning "file($i).pdf"` ]]
	then
		echo -n ""
	else
		convert $i
	fi
}
	
function main
{
#	Initialize
	for((i=0;i<= $NUMBER;i++))
	do
		convert $i	
		Process	
	done
}
main
