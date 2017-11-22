#! /bin/tcsh
df | grep sda1
#df | grep sda1 | grep -o "[0-9]*%"

df | grep sda1 | gawk '{print $5}' | cut -d '%' -f1
#------------------------------------------------------------------------------
echo -n "Enter a number: "
set  Number = "$<"
set Percentage = `df | grep sda1 | gawk '{print $5}' | cut -d '%' -f1`

if ( $Number < 0 ) then
    echo "Enter a real number"

#   set Percentage = `df | grep sda1 | gawk '{print $5}' | cut -d '%' -f1`
else
    if ( $Number > $Percentage ) then
        echo "Number is greater than the sda1 percentage"
    else
        echo $Number
    endif
endif
#------------------------------------------------------------------------------

