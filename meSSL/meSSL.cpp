// meSSL.cpp : Definiert die exportierten Funktionen f�r die DLL-Anwendung.
//

#include "stdafx.h"
#include "meSSL.h"


// Dies ist das Beispiel einer exportierten Variable.
MESSL_API int nmeSSL=0;

// Dies ist das Beispiel einer exportierten Funktion.
MESSL_API int fnmeSSL(void)
{
	return 42;
}

// Dies ist der Konstruktor einer Klasse, die exportiert wurde.
// Siehe meSSL.h f�r die Klassendefinition.
CmeSSL::CmeSSL()
{
	return;
}
