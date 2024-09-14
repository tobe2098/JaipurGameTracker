#include "utils.h"

void randomize_index_array(int arr[], int size) {
  for (int i = size - 1; i > 0; i--) {
    int j = rand() % (i + 1);
    // Swap array[i] with array[j]
    int temp = arr[i];
    arr[i]   = arr[j];
    arr[j]   = temp;
  }
}

void print_array_goods(char* name, const int* array, int size, int cutoff) {
  printf("Remaining %s tokens: ", name);
  for (int i = 0; i < size; i++) {
    if (i < cutoff) {
      printf(" * ");  // Three spaces
    } else {
      printf(" %i ", array[i]);
    }
  }
  printf("\n");
}

void print_winning_trophy(char player) {
  printf("                        xxxxxxXXXxxxXx                         \n");
  printf("                  xxxXXxxxxxxxxxxxXxxxxxxxxx                   \n");
  printf("                xxxxxxxxxxxxxx+++xxxxxxxxxxxxxx                \n");
  printf("             xxxxxXxxxxxxx+++xXXxx++xxxxxxxXxxxxxX             \n");
  printf("          xxxxxxxxxxxxx++xxxxXXXXXXxxx+++xxxxxxxxxxx           \n");
  printf("        xXxxxxxXxx+++xxxxxxXXXXxxxXXXXXXx++++xXXxxxxXx         \n");
  printf("       XxxxXxxx++xxXxxxxxxXXXXxXXxxxXXXXxxXXx++xxxxxxxxX       \n");
  printf("     xxXxxxx+xxxXxXxx+;:+xXXXXXxxxxXXxxXxxxXXXXxx++xxxxxx      \n");
  printf("    xxxxx+xXxxxXX+;;+xXX$XXXXxxxxXXXxxxxXXx;;xXXxxXXxxxxxx     \n");
  printf("   xxxxx++xxXx;;;xXXXXxxxXXXxXXXXXXxxXXXXXXXx;;;+xXxx+xxxxx    \n");
  printf("  xxxxxx+xxxx;;+XXxxXXXxxxxXXXXXXXXXXXxxXxxxx+;;;+Xxx++xxxxX   \n");
  printf("  xXxxx++XxX+;;xXXxxxXXXXxxxxXXXXXXXxxxXxxxxXx;;;;xXxx+xxxxXx  \n");
  printf(" xxxxxx+xxxx;;+X$$XXXxxX$XxxxxxXXXXXxXXXxxxxXX+;;;+Xxx++xxxXx  \n");
  printf(" XxxxXx+Xxxx;;;X$XXX$XXxxXXXXXXXXXXxXXXxxxxxXXx;;;+xxXx+XXxxxXX\n");
  printf("xxxXxx++xxX+;;;;x$$$XXX$XXxxXX$$XxxXXXxXXXXX$x;;;;;xXxx+xxXXxxx\n");
  printf("xxxxxx+xxXx;;++++x$$$$XXxXXXXXXXXXXXxxXXX$$X+;+;++;+xxXx+xxXxxx\n");
  printf("Xxxxx++xxX++++++++xX$XXX$$XXXXXXXXX$$$$$$Xx+++++++++xXxx+xxxxxx\n");
  printf("xxxxx+xXxx+++++++++xX$XX$XXXXXx;+XXXX$$$x++++++++++++xxX++xxxxx\n");
  printf("xxxXx+xxXx+++++++++++X$$$XXXxxx++xxxx$X++++++++++++++Xxxx+XXxxx\n");
  printf("xXxx++xxx++++++++++++xxX$Xxx+xXx+++++XX+++++++++++++;+Xxx++xXXX\n");
  printf("xxxx+xXxXx;++++++++++xxX$X+++xXx++++xXX++++++++++++++xxxXxxXxxx\n");
  printf(" xxxx+xXxxX++xx+++xxxxxX$XXX$$$$$$$XX$Xxx+++xxx++++xXxXX++xxxx \n");
  printf(" xxxxxx+xxxxx+x+++xxxX$$$$$$XXXXXXX$$$$$Xx++xxxx++xxxXx+xxxXx  \n");
  printf("  xxxxxx+xxxXx++++xxX$$$$$$$$XxxxxX$$$XXXx++xxx++Xxxx++xxxxXx  \n");
  printf("   Xxxxxxx+XXxXx;+++XXX$$$$$$$$$$$$$$X+;+++++;+xXxXx+xxxxxxX   \n");
  printf("    xxxXxxx+xxxxX++xxXXX$$$$$$$$$XXX$$xx+++++xXxxX++xxxxxXx    \n");
  printf("     xxxxxxX++xxxXxxxxXX$$$$$$X$$$$XXXX+;;++xxxxx+xxxxxxxX     \n");
  printf("      xxxXxxxx+xXxxXXxxX$$$$$$$XX$$$$$$x;;+XxxX++xxxXXxxx      \n");
  printf("       xxXxxxxx++xxxXXxXX$$$$$XxxxXXXXxxxxXxXx+xxxxxxxx        \n");
  printf("         xxxxxxx++xXXxXXXXXXXXxxxxxxxxXxxxXx++xxxxxxx          \n");
  printf("           xxxxXxx+++xxxxxxxxx+xxxxxxxxxxx+++xxxxxx            \n");
  printf("              xxxxxxxXxxxxxxxxxxxxXxxxxxxxxxxxxxx              \n");
  printf("                xXxXxxxXXxxxxxxXXxxxXxxxxxxxXX                 \n");
  printf("                    xXXxxxxxXxxxxXXxxxxxxx                     \n");
  if (player == 'A') {
    printf("██████╗ ██╗      █████╗ ██╗   ██╗███████╗██████╗ \n");
    printf("██╔══██╗██║     ██╔══██╗╚██╗ ██╔╝██╔════╝██╔══██╗\n");
    printf("██████╔╝██║     ███████║ ╚████╔╝ █████╗  ██████╔╝\n");
    printf("██╔═══╝ ██║     ██╔══██║  ╚██╔╝  ██╔══╝  ██╔══██╗\n");
    printf("██║     ███████╗██║  ██║   ██║   ███████╗██║  ██║\n");
    printf("╚═╝     ╚══════╝╚═╝  ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝\n");
    printf("                                                 \n");
    printf(" █████╗     ██╗    ██╗██╗███╗   ██╗███████╗██╗   \n");
    printf("██╔══██╗    ██║    ██║██║████╗  ██║██╔════╝██║   \n");
    printf("███████║    ██║ █╗ ██║██║██╔██╗ ██║███████╗██║   \n");
    printf("██╔══██║    ██║███╗██║██║██║╚██╗██║╚════██║╚═╝   \n");
    printf("██║  ██║    ╚███╔███╔╝██║██║ ╚████║███████║██╗   \n");
    printf("╚═╝  ╚═╝     ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝╚══════╝╚═╝   \n");
  } else if (player == 'B') {
    printf("██████╗ ██╗      █████╗ ██╗   ██╗███████╗██████╗ \n");
    printf("██╔══██╗██║     ██╔══██╗╚██╗ ██╔╝██╔════╝██╔══██╗\n");
    printf("██████╔╝██║     ███████║ ╚████╔╝ █████╗  ██████╔╝\n");
    printf("██╔═══╝ ██║     ██╔══██║  ╚██╔╝  ██╔══╝  ██╔══██╗\n");
    printf("██║     ███████╗██║  ██║   ██║   ███████╗██║  ██║\n");
    printf("╚═╝     ╚══════╝╚═╝  ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝\n");
    printf("                                                 \n");
    printf("██████╗     ██╗    ██╗██╗███╗   ██╗███████╗██╗   \n");
    printf("██╔══██╗    ██║    ██║██║████╗  ██║██╔════╝██║   \n");
    printf("██████╔╝    ██║ █╗ ██║██║██╔██╗ ██║███████╗██║   \n");
    printf("██╔══██╗    ██║███╗██║██║██║╚██╗██║╚════██║╚═╝   \n");
    printf("██████╔╝    ╚███╔███╔╝██║██║ ╚████║███████║██╗   \n");
    printf("╚═════╝      ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝╚══════╝╚═╝   \n");
  }
}

void print_welcome_message() {
  printf(":::+++;;;;;:.....:++++;+:;:..::::::::::...........:::;X:::::;::\n");
  printf("::;+;+;;::;:.....:;+++;+:;;:.:;:;:.:..............::.:$++;x+:::\n");
  printf("+;++;;;::::....;;;;;;;;;;;;;;;;;;::::................+$+;;;x:..\n");
  printf("++;+++;;;;;;;;;;;;;;;;;;;;;;;;;;;:::::::::...........$$&&X;;X;.\n");
  printf(";;;::;;;;;;;;;;;X&&&&&Xx&&$&X:$&&&X::::::::::.......x$XXx+XX$..\n");
  printf(";::::::;;;;;;;;+&$$$$x:$$$X$+:XXXX$;:..::::::.......+&$$$$X++;.\n");
  printf(";;;;;;;;;;;;;;;+&$$$$:X&&&&&;+$XX$&&&+:::::::::.....$$&&xX++x;.\n");
  printf(";;;;;;;;;;;;;x&&&&&&X+&&&&&&+x&&&$&$$&&&;::::::::::;$xX&:+X$x..\n");
  printf("+;;;;;;++++;X&&&&$$&$X$$$$$&Xx$XX$&$&&&;:::::::::::X+xX$..x....\n");
  printf("x+;;;;++++++&&&&&&&&$&&&&&&&X$&&&&&x&&X:;;;;;;;;;;x+xxX$;+X;;;;\n");
  printf("x+;;;;++++++&&$&&&&$$&&&&&&&$&&&&&&x&&&;;+;;;+;;+&x+xx$x;Xx;;++\n");
  printf("x+;;;;+++XXX&&$$$&&$x&&&&&&&$&&&$Xxx&&&&&&X++xX$X++++X$;+XX;;++\n");
  printf("x+;;;;;x&X+x&$$$$$$xX&$$$$x&&$&X++;+$&&&&&x++XXX+;;+x$x;;xX;;;;\n");
  printf(";:::;:x&X++x&&&&&&&&$$&&&x+$&$Xx+;;+$xxX&$+++XXx+;;+XX;;;Xx;;;;\n");
  printf("+;;;+$&x:++X&&&&&&&&&$&&&$$$&$X&&&&&&$xx&x;XX$XX++X&x;;;;$+;;;;\n");
  printf("+;;+&&x;;xx$&$$$&&&&&&&&&&&&&$X$$$$$&&Xx&++X&$$$$&&+;++;;&;;;+x\n");
  printf("              ██╗ █████╗ ██╗ ██████╗ ██╗   ██╗██████╗          \n");
  printf("              ██║██╔══██╗██║ ██╔══██╗██║   ██║██╔══██╗         \n");
  printf("              ██║███████║██║ ██████╔╝██║   ██║██████╔╝         \n");
  printf("         ██   ██║██╔══██║██║ ██╔═══╝ ██║   ██║██╔══██╗         \n");
  printf("███████╗ ╚█████╔╝██║  ██║██║ ██║     ╚██████╔╝██║  ██║ ███████╗\n");
  printf("╚══════╝  ╚════╝ ╚═╝  ╚═╝╚═╝ ╚═╝      ╚═════╝ ╚═╝  ╚═╝ ╚══════╝\n");
}

void print_new_round_message() {
  printf("███╗   ██╗███████╗██╗  ██╗████████╗                          ");
  printf("████╗  ██║██╔════╝╚██╗██╔╝╚══██╔══╝                          ");
  printf("██╔██╗ ██║█████╗   ╚███╔╝    ██║                             ");
  printf("██║╚██╗██║██╔══╝   ██╔██╗    ██║                             ");
  printf("██║ ╚████║███████╗██╔╝ ██╗   ██║                             ");
  printf("╚═╝  ╚═══╝╚══════╝╚═╝  ╚═╝   ╚═╝                             ");
  printf("                                                             ");
  printf("██████╗  ██████╗ ██╗   ██╗███╗   ██╗██████╗                  ");
  printf("██╔══██╗██╔═══██╗██║   ██║████╗  ██║██╔══██╗██╗              ");
  printf("██████╔╝██║   ██║██║   ██║██╔██╗ ██║██║  ██║╚═╝              ");
  printf("██╔══██╗██║   ██║██║   ██║██║╚██╗██║██║  ██║██╗              ");
  printf("██║  ██║╚██████╔╝╚██████╔╝██║ ╚████║██████╔╝╚═╝              ");
  printf("╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═══╝╚═════╝                  ");
  printf("                                                             ");
  printf(" ██████╗ ██████╗ ███╗   ██╗ ██████╗ ██╗   ██╗███████╗██████╗ ");
  printf("██╔════╝██╔═══██╗████╗  ██║██╔═══██╗██║   ██║██╔════╝██╔══██╗");
  printf("██║     ██║   ██║██╔██╗ ██║██║   ██║██║   ██║█████╗  ██████╔╝");
  printf("██║     ██║   ██║██║╚██╗██║██║▄▄ ██║██║   ██║██╔══╝  ██╔══██╗");
  printf("╚██████╗╚██████╔╝██║ ╚████║╚██████╔╝╚██████╔╝███████╗██║  ██║");
  printf(" ╚═════╝ ╚═════╝ ╚═╝  ╚═══╝ ╚══▀▀═╝  ╚═════╝ ╚══════╝╚═╝  ╚═╝");
  printf("                                                             ");
  printf("████████╗██╗  ██╗███████╗                                    ");
  printf("╚══██╔══╝██║  ██║██╔════╝                                    ");
  printf("   ██║   ███████║█████╗                                      ");
  printf("   ██║   ██╔══██║██╔══╝                                      ");
  printf("   ██║   ██║  ██║███████╗                                    ");
  printf("   ╚═╝   ╚═╝  ╚═╝╚══════╝                                    ");
  printf("                                                             ");
  printf("███╗   ███╗ █████╗ ██████╗ ██╗  ██╗███████╗████████╗██╗      ");
  printf("████╗ ████║██╔══██╗██╔══██╗██║ ██╔╝██╔════╝╚══██╔══╝██║      ");
  printf("██╔████╔██║███████║██████╔╝█████╔╝ █████╗     ██║   ██║      ");
  printf("██║╚██╔╝██║██╔══██║██╔══██╗██╔═██╗ ██╔══╝     ██║   ╚═╝      ");
  printf("██║ ╚═╝ ██║██║  ██║██║  ██║██║  ██╗███████╗   ██║   ██╗      ");
  printf("╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝   ╚═╝   ╚═╝      ");
}
