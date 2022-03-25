<h1 class="gap">Project _printf() at Holberton School</h1>
<p dir="auto">The _printf project is a collaboration between Sebastian Garcia and Sebastian Blandon, actual students of Software Development at Holberton School, the function _printf is an imitation of the original printf function found in the <stdio.h> library, which everyone who knows C programming language knows how to use.</p>
<p dir="auto">_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:</p>

<table>
<thead>
<tr>
<th>Prototype name</th>
<th>Conversion Specifiers</th>
</tr>
</thead>
<tbody>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_char.c"><code>_print_char.c</code></a></td>
<td>if %c is found in the format, the argument corresponding to char is printed</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_string.c"><code>_print_string.c</code></a></td>
<td>if %s is in the format, the argument corresponding to the entered array is printed out</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_number.c"><code>_print_number.c</code></a></td>
<td>if %d or %i is found in the format, the argument corresponding to the number entered is printed, no matter if it is positive or negative.</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_u_number.c"><code>_print_u_number.c</code></a></td>
<td>if %u is found in the format, the argument corresponding to the number entered is printed, regardless of whether it is positive or negative.</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_binary.c"><code>_print_binary.c</code></a></td>
<td>if %b is found in the format, the argument corresponding to the number entered is printed in base 2</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_octal.c"><code>_print_octal.c</code></a></td>
<td>if %o is found in the format, the argument corresponding to the number entered is printed in base 8</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_hexa.c"><code>_print_hexa.c</code></a></td>
<td>if %x is found in the format, the argument corresponding to the number entered is printed in base 16 in lowercase</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_hexa_up.c"><code>_print_hexa_up.c</code></a></td>
<td>if %X is found in the format, the argument corresponding to the number entered is printed in base 16 in uppercase</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_revstr.c"><code>_print_revstr.c</code></a></td>
<td>if %r is found in the format, the argument corresponding to the entered array is printed backwards</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_print_roo13.c"><code>_print_roo13.c</code></a></td>
<td>if %R is found in the format, the argument corresponding to the entered array is printed by substituting letters with the equivalent in rot13</td>
</tr>
</tbody>
</table>

<p dir="auto">And the additional functions used was the next:</p>

<table>
<thead>
<tr>
<th>Prototype name</th>
<th>Description</th>
</tr>
</thead>
<tbody>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/get_fun.c"><code>_get_fun.c</code></a></td>
<td>This function is the basis of the operation of the main function _printf, in the function get the function determines which function should be used for a certain case.</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_char*_to_number.c"><code>_char*_to_number.c</code></a></td>
<td>this function is used to pass a char data type to decimal, since in some cases it was necessary to do so.</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/_number_to_char*.c"><code>_number_to_char*.c</code></a></td>
<td>this function is used to pass a decimal data type to char, since in some cases it was necessary to do so.</td>
</tr>
<tr>
<td><a href="https://github.com/SebasGTX1/printf/blob/master/reverse_array.c"><code>reverse_array.c</code></a></td>
<td>this function is used to change the positions of the array, in reverse</td>
</tr>
</tbody>
</table>

<h3 dir="auto"><svg class="octicon octicon-link" viewbox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg>Authors</h3>
<p dir="auto">Sebastian Garcia and Sebastian Blandon.</p>
<hr />
<h3 dir="auto"><svg class="octicon octicon-link" viewbox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg>Holberton Shcool(©) 2022</h3>