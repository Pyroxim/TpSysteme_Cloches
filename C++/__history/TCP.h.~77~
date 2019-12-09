//---------------------------------------------------------------------------
#ifndef TCPH
#define TCPH
//---------------------------------------------------------------------------
#include <winsock2.h>
#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
class ClientTCP
{
	private :
		WSADATA wsadata;
		SOCKET sock;
		SOCKADDR_IN sin;

		char trame[14];
		char trameMarteau[14];

	public :
		ClientTCP();

		~ClientTCP();

		bool Connexion();
		bool Deconnexion();

		void Cloche1();
		void Cloche2();
		void Cloche3();
		void Cloche4();

		void EnvoiTrame(char *trame, int taille);
};

#endif
