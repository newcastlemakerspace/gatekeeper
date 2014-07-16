const int NUM_AUTH= 2;
const int  AUTH_BYTES= 4;

const  char card1[AUTH_BYTES]=  {0xde, 0xca, 0xfb, 0xad};
const  char card2[AUTH_BYTES]=  {0xde, 0xad, 0xbe, 0xef};

const char  * auth_cards[NUM_AUTH] = {
	(const char*)&card1, 
	(const char *)&card2

};  


