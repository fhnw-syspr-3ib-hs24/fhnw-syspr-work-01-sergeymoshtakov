# System-Programmierung
## Hands-on zu Lektion 1
Für Slides und Code Beispiele, siehe [Lektion 1](../../../fhnw-syspr/blob/master/01/README.md)

> *Achtung: Arbeiten Sie nicht direkt auf diesem Repository.*<br/>
> *[Prüfen Sie die vorhandenen Forks, um das Repository für Ihre Klasse zu finden.](../../network/members)*

### a) sizeof() Operator, 10'
* Schreiben Sie ein Programm, das die Grössen in Byte der Basistypen *char*, *int*, *long*, *float*, *double* ausgibt.
* Nutzen Sie dazu den *sizeof()* Operator und *printf()*:<pre>
    sizeof(char) = 1
    sizeof(int) = …</pre>
* Die Ausgabe von *int* Werten ist möglich mit *%d*, z.B.<pre>
    printf("%d\n", i); // \n = newline character</pre>

### b) Argumente lesen, 15'
* Das System übergibt Command-Line Argumente so:<pre>
    int main(int argc, char *argv[]);</pre>
* Schreiben Sie ein Programm *my_args.c*, das seine Argumente, d.h. alle Strings im Array *argv* ausgibt:<pre>
    $ ./my_args hoi …
    0: ./my_args, 1: hoi, …</pre>
* Erweitern Sie das Programm, dass es einen Fehler ausgibt, falls ein Argument nicht aus [a-z]* besteht.

### c) Bäume, 15'
* Erstellen Sie eine Datei *my_tree.c* mit einem Struct Typ Tree mit Zeigern auf *left*, *right* vom selben Typ, und einem String *label* von maximal 32 Byte Länge.
* Instanzieren Sie einen binären Baum mit 3 Blättern, verwenden Sie dazu die Funktionen malloc und free.

### d) Makefile, 15'
* Erstellen Sie ein *makefile* für Ihren Hands-on Code.
* Verwenden Sie die Compiler Flags aus dem Script.
* Korrigieren Sie allfällige neue Kompilationsfehler.
* Führen Sie *make clean* aus, vor dem *git commit*.
