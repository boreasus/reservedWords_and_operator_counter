#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#include <filesystem>
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;
using std::filesystem::directory_iterator;



int main(void) 
{

	string line, current_file;
	int module_counter = 0;



	ofstream result_file{ "total.cpp" };
	string current_path = fs::current_path().string();
	//the path main.cpp working on


	cout << "Current path is : " << current_path<<endl;


	//pth variable access every file in the folder 
	for (const auto& file : directory_iterator(current_path))
	{
		current_file = file.path().string();
		ifstream working_file(current_file.c_str());
		if (current_file.substr(current_file.length() - 4) == ".cpp") {
			if (current_file.substr(current_file.length() - 8) == "main.cpp")
				continue;
			if (current_file.substr(current_file.length() - 9) == "total.cpp")
				continue;

			if (working_file && result_file)
			{


				cout << file.path().string() << " OPENED" << endl;
				module_counter++;
				while (getline(working_file, line))
				{

					result_file << line << "\n";
				}

			}
			else
			{
				cout << file.path().string() << " COULDN'T OPEN" << endl;
			}
			result_file.close();
		}










	}


	char cc = '_';
	int ifCounter = 0, whileCounter = 0, forCounter = 0, plusCounter = 0, brCounter = 0,
		arrCounter = 0, eqCounter = 0, equCounter = 0, nonequCounter = 0, ch = 0, charCounter = 0,typedefCounter=0,volaliteCounter=0;
	int intCounter = 0, dh=0,ih/*int counter helper*/ = 0,lh = 0,fh=0,sh=0, includeCounter = 0, asmCounter = 0, autoCounter = 0, breakCounter = 0,caseCounter = 0, catchCounter = 0, classCounter = 0, constCounter = 0, continueCounter=0,coutCounter= 0,cinCounter= 0,deleteCounter=0,defaultCounter=0,doCounter=0,doubleCounter=0,elseCounter=0,enumCounter=0,externCounter=0,floatCounter=0,friendCounter=0,inlineCounter=0,gotoCounter=0,longCounter=0,newCounter=0,nullCounter=0,operatorCounter=0,privateCounter=0,protectedCounter=0,publicCounter=0,registerCounter=0,returnCounter=0,shortCounter=0,signedCounter=0,sizeofCounter=0,staticCounter=0,structCounter=0,stringCounter=0,switchCounter=0,templateCounter=0,thisCounter=0,throwCounter=0,tryCounter=0,typeDefCounter=0,unionCounter=0,unsignedCounter=0,virtualCounter=0,voidCounter=0,volatileCounter=0,
		openBracketCounter = 0,additionCounter = 0, substractionCounter=0, multiplicationCounter=0,divisonCounter=0,moduleCounter=0,increaseCounter=0,decreaseCounter=0,smallerCounter=0,greaterCounter=0,pointerAccessCounter=0,retrunValueCounter=0,binaryShiftRightCounter=0,binaryShiftLeftCounter=0,binaryOnesComplementCounter=0,binaryXorCounter=0,binaryOrCounter=0,binaryAndCounter=0,notCounter=0,orCounter=0,andCounter=0,lesserEqualityCounter=0,greaterEqualityCounter=0,notEqualityCounter=0,equalEqaulityCounter=0,percentEqualityCounter=0,divideEqualityCounter=0,multipleEqualityCounter=0,minusEqualityCounter=0,addEqualityCounter=0,equalityCounter=0;
	string file_name = "main.cpp";
	FILE* f = fopen(file_name.c_str(), "r+");
	FILE a;

	for (int j = 0; j < 2; j++) {
		if (j == 1) {
			file_name = "total.cpp";
			f = fopen(file_name.c_str(), "r+");
			ifCounter = 0, whileCounter = 0, forCounter = 0, plusCounter = 0, brCounter = 0,
				arrCounter = 0, eqCounter = 0, equCounter = 0, nonequCounter = 0, ch = 0, charCounter = 0, typedefCounter = 0, volaliteCounter = 0;
			intCounter = 0, dh = 0, ih/*int counter helper*/ = 0, lh = 0, fh = 0, sh = 0, includeCounter = 0, asmCounter = 0, autoCounter = 0, breakCounter = 0, caseCounter = 0, catchCounter = 0, classCounter = 0, constCounter = 0, continueCounter = 0, coutCounter = 0, cinCounter = 0, deleteCounter = 0, defaultCounter = 0, doCounter = 0, doubleCounter = 0, elseCounter = 0, enumCounter = 0, externCounter = 0, floatCounter = 0, friendCounter = 0, inlineCounter = 0, gotoCounter = 0, longCounter = 0, newCounter = 0, nullCounter = 0, operatorCounter = 0, privateCounter = 0, protectedCounter = 0, publicCounter = 0, registerCounter = 0, returnCounter = 0, shortCounter = 0, signedCounter = 0, sizeofCounter = 0, staticCounter = 0, structCounter = 0, stringCounter = 0, switchCounter = 0, templateCounter = 0, thisCounter = 0, throwCounter = 0, tryCounter = 0, typeDefCounter = 0, unionCounter = 0, unsignedCounter = 0, virtualCounter = 0, voidCounter = 0, volatileCounter = 0,
				openBracketCounter = 0, additionCounter = 0, substractionCounter = 0, multiplicationCounter = 0, divisonCounter = 0, moduleCounter = 0, increaseCounter = 0, decreaseCounter = 0, smallerCounter = 0, greaterCounter = 0, pointerAccessCounter = 0, retrunValueCounter = 0, binaryShiftRightCounter = 0, binaryShiftLeftCounter = 0, binaryOnesComplementCounter = 0, binaryXorCounter = 0, binaryOrCounter = 0, binaryAndCounter = 0, notCounter = 0, orCounter = 0, andCounter = 0, lesserEqualityCounter = 0, greaterEqualityCounter = 0, notEqualityCounter = 0, equalEqaulityCounter = 0, percentEqualityCounter = 0, divideEqualityCounter = 0, multipleEqualityCounter = 0, minusEqualityCounter = 0, addEqualityCounter = 0, equalityCounter = 0;

		}
		while (!feof(f)) {

			cc = getc(f);


			//command blocklu satırı atlar
			if (cc == '/') {
				cc = getc(f);
				if (cc == '/') {
					while (cc != '\n') cc = getc(f);
				}
			}


			//#include arar
			if (cc == '#') {
				cc = getc(f);
				if (cc == 'i') {
					cc = getc(f);
					if (cc == 'n')
					{
						cc = getc(f);
						if (cc == 'c') {
							includeCounter++;
							while (cc != '\n') cc=getc(f);
						}

					}

				}


			}


			//asm arar
			//auto arar
			if (cc == 'a') 
{
				cc = getc(f);
				if (cc == 'u') {
					cc = getc(f);
					if (cc == 't') {
						cc = getc(f);
						if (cc == 'o') {
							cc = getc(f);
							if (cc == ' ') {
								autoCounter++;
							}
						}
					}
				}
				if (cc == 's') {
					cc = getc(f);
					if (cc == 'm')
					{
						cc = getc(f);
						if (cc == ' ') {
							asmCounter++;
						}

					}

				}


			}

			//break arar
			if (cc == 'b')
			{
				cc = getc(f);
				if (cc == 'r') {
					cc = getc(f);
					if (cc == 'e') {
						cc = getc(f);
						if (cc == 'a') {
							cc = getc(f);
							if (cc == 'k') {
								cc = getc(f);
								if (cc == ';') {
									breakCounter++;
								}
							}
						}
					}
				}
			}

			//case arar
			//catch arar
			//char arar
			//class arar
			//const arar
			//continue arar
			//cout arar
			//cin arar
			if (cc == 'c')
			{
				cc = getc(f);
				if (cc == 'a') {
					cc = getc(f);
					if (cc == 's') {
						cc = getc(f);
						if (cc == 'e') {
							cc = getc(f);
							if (cc == ' ') {
								caseCounter++;
							}
						}
					}
					if (cc == 't') {
						cc = getc(f);
						if (cc == 'c') {
							cc = getc(f);
							if (cc == 'h') {
								cc = getc(f);
								if (cc == ' ' || cc== '(') {
									catchCounter++;
								}
							}
						}
					}


				}
				if (cc == 'h')
				{
					cc = getc(f);
					if (cc == 'a') {
						cc = getc(f);
						if (cc == 'r') {
							cc = getc(f);
							if (cc == ' ')
							{
								while (true)
								{
									cc = getc(f);
									if (cc == ',') ch++;
									if (cc == '[') {
										arrCounter += 1;
									}
									if (cc == ';')
									{
										if (ch == 0) ch = 1; else ch++; //bulunan char tek başına declare edildiyse
										break;
									}
								}
							}
						}

					}
				}
				if (cc == 'l') {
					cc = getc(f);
					if (cc == 'a') {
						cc = getc(f);
						if (cc == 's') {
							cc = getc(f);
							if (cc == 's') {
								cc = getc(f);
								if (cc == ' ') {
									classCounter++;
								}
							}
						}
					}
				}
				if (cc == 'o') {
					cc = getc(f);
					if (cc == 'n')
					{
						cc = getc(f);
						if (cc == 's') {
							cc = getc(f);
							if (cc == 't') {
								cc = getc(f);
								if (cc == ' ') {
									constCounter++;
								}
							}
						}
						if (cc == 't') {
							cc = getc(f);
							if (cc == 'i') {
								cc = getc(f);
								if (cc == 'n') {
									cc = getc(f);
									if (cc == 'u') {
										cc = getc(f);
										if (cc == 'e') {
											cc = getc(f);
											if (cc == ';') {
												continueCounter++;
											}
										}
									}
								}
							}
						}




					}
					if (cc == 'u') {
						cc = getc(f);
						if (cc == 't') {
							cc = getc(f);
							if (cc == ' '||cc=='<') {
								coutCounter++;
							}
						}
					}

				}
				if (cc == 'i') {
					cc = getc(f);
					if (cc == 'n') {
						cc = getc(f);
						if (cc == ' ' || cc == '>') {
							cinCounter++;
						}
					}
				}
			}
			charCounter += ch;
			ch = 0;



			//delete arar
			//default arar
			//do arar
			//double arar
			if (cc == 'd') {
				cc = getc(f);
				if (cc == 'e') {
					cc = getc(f);
					if (cc == 'l') {
						cc = getc(f);
						if (cc == 'e') {
							cc = getc(f);
							if (cc == 't') {
								cc = getc(f);
								if (cc == 'e') {
									cc = getc(f);
									if (cc == '[' || cc == ' ') {
										deleteCounter++;
									}
								}
							}
						}
					}

					if (cc == 'f') {
						cc = getc(f);
						if (cc == 'a') {
							cc = getc(f);
							if (cc == 'u') {
								cc = getc(f);
								if (cc == 'l') {
									cc = getc(f);
									if (cc == 't') {
										cc = getc(f);
										if (cc == ' ') {
											defaultCounter++;
										}
									}
								}
							}
						}
					}

				}
				if (cc == 'o') {
					cc = getc(f);
					if (cc == ' ' || cc=='{' || cc == '\n') {
						doCounter++;
					}
					if (cc == 'u') {
						cc = getc(f);
						if (cc == 'b') {
							cc = getc(f);
							if (cc == 'l') {
								cc = getc(f);
								if (cc == 'e') {
									cc = getc(f);
									if (cc == ' ') {
										while (true) {
											cc = getc(f);
											if (cc == ',') dh++;
											if (cc == '[') { arrCounter += 1; }
											if (cc == ';')
											{
												if (dh == 0) dh = 1; else dh++; //bulunan double tek başına declare edildiyse
												break;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			doubleCounter += dh;
			dh = 0;


			//else arar
			//enum arar
			//extern arar
			if (cc == 'e') {
				cc = getc(f);
				if (cc == 'l') {
					cc = getc(f);
					if (cc == 's') {
						cc = getc(f);
						if (cc == 'e') {
							cc = getc(f);
							if (cc == ' ' || cc == '\n' || cc=='{') {
								elseCounter++;
							}
						}
					}
				}

				if (cc == 'n') {
					cc = getc(f);
					if (cc == 'u') {
						cc = getc(f);
						if (cc == 'm') {
							cc = getc(f);
							if (cc == ' ') {
								enumCounter++;
							}
						}
					}
				}

				if (cc == 'x') {
					cc = getc(f);
					if (cc == 't') {
						cc = getc(f);
						if (cc == 'e') {
							cc = getc(f);
							if (cc == 'r') {
								cc = getc(f);
								if (cc == 'n') {
									cc = getc(f);
									if (cc == ' ') {
										externCounter++;
									}
								}
							}
						}
					}
				}


			}

			//for arar
			//friend arar
			if (cc == 'f')
			{
				cc = getc(f);
				if (cc == 'o')
				{
					cc = getc(f);
					if (cc == 'r') {
						cc = getc(f);
						if (cc == ' ' || cc == '(' || cc == '\n')
							forCounter++;
					}

				}

				if (cc == 'l') {
					cc = getc(f);
					if (cc == 'o') {
						cc = getc(f);
						if (cc == 'a') {
							cc = getc(f);
							if (cc == 't') {
								cc = getc(f);
								if (cc == ' ')
								{
									while (true) {
										cc = getc(f);
										if (cc == ',') fh++;
										if (cc == '[') { arrCounter += 1; }
										if (cc == ';')
										{
											if (fh == 0) fh = 1; else fh++; //bulunan int tek başına declare edildiyse
											break;
										}
									}
								}
							}
						}
					}
				}

				if (cc == 'r') {
					cc = getc(f);
					if (cc == 'i') {
						cc = getc(f);
						if (cc == 'e') {
							cc = getc(f);
							if (cc == 'n') {
								cc = getc(f);
								if (cc == 'd') {
									cc = getc(f);
									if (cc == ' ') {
										friendCounter++;
									}
								}
							}
						}
					}
				}

			}

			floatCounter += fh;
			fh = 0;

			//if arar
			//int arar
			//inline arar
			if (cc == 'i')
			{
				cc = getc(f);
				if (cc == 'f')
				{
					cc = getc(f);
					if (cc == ' ' || cc == '(' || cc == '\n' || feof(f))
						ifCounter++;
				}
				if (cc == 'n') 
				{
					cc = getc(f);
					if (cc == 't')
					{
						cc = getc(f);
						if (cc == ' ')
						{
							while (true) {
								cc = getc(f);
								if (cc == ',') ih++;
								if (cc == '[') { arrCounter += 1;}
								if (cc == ';')
								{
									if (ih == 0) ih = 1; else ih++; //bulunan int tek başına declare edildiyse
									break;
								}
							}
						}
					}
					if (cc == 'l') {
						cc = getc(f);
						if (cc == 'i') {
							cc = getc(f);
							if (cc == 'n') {
								cc = getc(f);
								if (cc == 'e') {
									cc = getc(f);
									if (cc == ' ') {
										inlineCounter++;
									}
								}
							}
						}
					}
				}

			}

			intCounter += ih;
			ih = 0;

			//goto arar
			if (cc == 'g') {
				cc = getc(f);
				if (cc == 'o') {
					cc = getc(f);
					if (cc == 't') {
						cc = getc(f);
						if (cc == 'o') {
							cc = getc(f);
							if (cc == ' ') {
								gotoCounter++;
							}
						}
					}
				}
			}

			//long arar
			if (cc == 'l') {
				cc = getc(f);
				if (cc == 'o') {
					cc = getc(f);
					if (cc == 'n') {
						cc = getc(f);
						if (cc == 'g') {
							cc = getc(f);
							if (cc == ' ') {
								while (true) {
									cc = getc(f);
									if (cc == ',') lh++;
									if (cc == '[') { arrCounter += 1; }
									if (cc == ';')
									{
										if (lh == 0) lh = 1; else lh++; //bulunan long tek başına declare edildiyse
										break;
									}
								}
							}
						}
					}
				}
			}

			longCounter += lh;
			lh = 0;

			//new arar
			if (cc == 'n' || cc=='N') {
				cc = getc(f);
				if (cc == 'e') {
					cc = getc(f);
					if (cc == 'w') {
						cc = getc(f);
						if (cc == ' ') {
							newCounter++;
						}
					}
				}
				if (cc == 'U') {
					cc = getc(f);
					if (cc == 'L') {
						cc = getc(f);
						if (cc == 'L') {
							cc = getc(f);
							if (cc == ' '||cc==';' || cc=='\n') {
								nullCounter++;
							}
						}
					}
				}
			}
			//operator arar
			if (cc == 'o') {
				cc = getc(f);
				if (cc == 'p') {
					cc = getc(f);
					if (cc == 'e') {
						cc = getc(f);
						if (cc == 'r') {
							cc = getc(f);
							if (cc == 'a') {
								cc = getc(f);
								if (cc == 't') {
									cc = getc(f);
									if (cc == 'o') {
										cc = getc(f);
										if (cc == 'r') {
											cc = getc(f);
											if (cc == '+' || cc == '-' || cc == '*' || cc == '/' || cc == '!' || cc == '=') {
												operatorCounter++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//private arar
			//protected arar
			//public arar
			if (cc == 'p') {
				cc = getc(f);
				if (cc == 'r') {
					cc = getc(f);
					if (cc == 'i') {
						cc = getc(f);
						if (cc == 'v') {
							cc = getc(f);
							if (cc == 'a') {
								cc = getc(f);
								if (cc == 't') {
									cc = getc(f);
									if (cc == 'e') {
										privateCounter++;
									}
								}
							}
						}
					}
					if (cc == 'o') {
						cc = getc(f);
						if (cc == 't') {
							cc = getc(f);
							if (cc == 'e') {
								cc = getc(f);
								if (cc == 'c') {
									cc = getc(f);
									if (cc == 't') {
										cc = getc(f);
										if (cc == 'e') {
											cc = getc(f);
											if (cc == 'd') {
												cc = getc(f);
												if (cc == ' ') {
													protectedCounter++;
												}
											}
										}
									}
								}
							}
						}
					}


				}

				if (cc == 'u') {
					cc = getc(f);
					if (cc == 'b') {
						cc = getc(f);
						if (cc == 'l') {
							cc = getc(f);
							if (cc == 'i') {
								cc = getc(f);
								if (cc == 'c') {
									cc = getc(f);
									if (cc == ' ') {
										publicCounter++;
									}
								}
							}
						}
					}
				}

			}

			//register arar
			//return arar
			if (cc == 'r') {
				cc = getc(f);
				if (cc == 'e') {
					cc = getc(f);
					if (cc == 'g') {
						cc = getc(f);
						if (cc == 'i') {
							cc = getc(f);
							if (cc == 's') {
								cc = getc(f);
								if (cc == 't') {
									cc = getc(f);
									if (cc == 'e') {
										cc = getc(f);
										if (cc == 'r') {
											cc = getc(f);
											if (cc == ' ') {
												registerCounter++;
											}
										}
									}
								}
							}
						}
					}

					if (cc == 't') {
						cc = getc(f);
						if (cc == 'u') {
							cc = getc(f);
							if (cc == 'r') {
								cc = getc(f);
								if (cc == 'n') {
									returnCounter++;
								}
							}
						}
					}

				}
			}
			//short arar
			//signed arar
			//sizeof arar
			//static arar
			//struct arar
			//string arar
			//switch arar
			if (cc == 's') {
				cc = getc(f);
				if (cc == 'h') {
					cc = getc(f);
					if (cc == 'o') {
						cc = getc(f);
						if (cc == 'r') {
							cc = getc(f);
							if (cc == 't') {
								cc = getc(f);
								if (cc == ' ') {
									shortCounter++;
								}
							}
						}
					}
				}

				if (cc == 'i') {
					cc = getc(f);
					if (cc == 'g') {
						cc = getc(f);
						if (cc == 'n') {
							cc = getc(f);
							if (cc == 'e') {
								cc = getc(f);
								if (cc == 'd') {
									cc = getc(f);
									if (cc == ' ') {
										signedCounter++;
									}
								}
							}
						}
					}

					if (cc == 'z') {
						cc = getc(f);
						if (cc == 'e') {
							cc = getc(f);
							if (cc == 'o') {
								cc = getc(f);
								if (cc == 'f') {
									cc = getc(f);
									if (cc == ' ' || cc=='(') {
										sizeofCounter++;
									}
								}
							}
						}
					}

				}


				if (cc == 't') {
					cc = getc(f);
					if (cc == 'a') {
						cc = getc(f);
						if (cc == 't') {
							cc = getc(f);
							if (cc == 'i') {
								cc = getc(f);
								if (cc == 'c') {
									cc = getc(f);
									if (cc == ' ') {
										staticCounter++;
									}
								}
							}
						}
					}


					if (cc == 'r') {
						cc = getc(f);
						if (cc == 'u') {
							cc = getc(f);
							if (cc == 'c') {
								cc = getc(f);
								if (cc == 't') {
									cc = getc(f);
									if (cc == ' ') {
										structCounter++;
									}
								}
							}
						}


						if (cc == 'i') {
							cc = getc(f);
							if (cc == 'n') {
								cc = getc(f);
								if (cc == 'g') {
									cc = getc(f);
									if (cc == ' ') {
										while (true) {
											cc = getc(f);
											if (cc == ',') sh++;
											if (cc == '[') { arrCounter += 1; }
											if (cc == ';')
											{
												if (sh == 0) sh = 1; else sh++; //bulunan string tek başına declare edildiyse
												break;
											}
										}
									}
								}
							}
						}
					}
				}

				if (cc == 'w') {
					cc = getc(f);
					if (cc == 'i') {
						cc = getc(f);
						if (cc == 't') {
							cc = getc(f);
							if (cc == 'c') {
								cc = getc(f);
								if (cc == 'h') {
									cc = getc(f);
									if (cc == ' '||cc=='(') {
										switchCounter++;
									}
								}
							}
						}
					}
				}

			}

			stringCounter += sh;
			sh = 0;



			//template arar
			//this arar
			//throw arar
			//try arar
			//typedef arar
			if (cc == 't') {
				cc = getc(f);
				if (cc == 'e') {
					cc = getc(f);
					if (cc == 'm') {
						cc = getc(f);
						if (cc == 'p') {
							cc = getc(f);
							if (cc == 'l') {
								cc = getc(f);
								if (cc == 'a') {
									cc = getc(f);
									if (cc == 't') {
										cc = getc(f);
										if (cc == 'e') {
											cc = getc(f);
											if (cc == ' ') {
												templateCounter++;
											}
										}
									}
								}
							}
						}
					}
				}

				if (cc == 'h') {
					cc = getc(f);
					if (cc == 'i') {
						cc = getc(f);
						if (cc == 's') {
							cc = getc(f);
							if (cc == '-') {
								cc = getc(f);
								if (cc == '>') {
									thisCounter++;
								}
							}
						}
					}



						if (cc == 'r') {
							cc = getc(f);
							if (cc == 'o') {
								cc = getc(f);
								if (cc == 'w') {
									cc = getc(f);
									if (cc == ' ') {
										throwCounter++;
									}
								}
							}
						}
					
				}

				if (cc == 'r') {
					cc = getc(f);
					if (cc == 'y') {
						cc = getc(f);
						if (cc == ' ') {
							tryCounter++;
						}
					}
				}
		
				if (cc == 'y') {
					cc = getc(f);
					if (cc == 'p') {
						cc = getc(f);
						if (cc == 'e') {
							cc = getc(f);
							if (cc == 'd') {
								cc = getc(f);
								if (cc == 'e') {
									cc = getc(f);
									if (cc == 'f') {
										cc = getc(f);
										if (cc == ' ') {
											typedefCounter++;
										}
									}
								}
							}
						}
					}
				}


			}

			//union arar
			//unsigned arar
			if (cc == 'u') {
				cc = getc(f);
				if (cc == 'n') {
					cc = getc(f);
					if (cc == 'i') {
						cc = getc(f);
						if (cc == 'o') {
							cc = getc(f);
							if (cc == 'n') {
								cc = getc(f);
								if (cc == ' ' ||cc =='(' || cc=='{') {
									unionCounter++;
								}
							}
						}
					}

					if (cc == 's') {
						cc = getc(f);
						if (cc == 'i') {
							cc = getc(f);
							if (cc == 'g') {
								cc = getc(f);
								if (cc == 'n') {
									cc = getc(f);
									if (cc == 'e') {
										cc = getc(f);
										if (cc == 'd') {
											cc = getc(f);
											if (cc == ' ') {
												unsignedCounter++;
											}
										}
									}
								}
							}
						}
					}

				}

			
			}


			//virtual arar
			//void arar
			//volatile arar
			if (cc == 'v') {
				cc = getc(f);
				if (cc == 'i') {
					cc = getc(f);
					if (cc == 'r') {
						cc = getc(f);
						if (cc == 't') {
							cc = getc(f);
							if (cc == 'u') {
								cc = getc(f);
								if (cc == 'a') {
									cc = getc(f);
									if (cc == 'l') {
										cc = getc(f);
										if (cc == ' ') {
											virtualCounter++;
										}
									}
								}
							}
						}
					}
				}

				if (cc == 'o') {
					cc = getc(f);
					if (cc == 'i') {
						cc = getc(f);
						if (cc == 'd') {
							cc = getc(f);
							if (cc == ' ') {
								voidCounter++;
							}
						}
					}

					if (cc == 'l') {
						cc = getc(f);
						if (cc == 'a') {
							cc = getc(f);
							if (cc == 't') {
								cc = getc(f);
								if (cc == 'i') {
									cc = getc(f);
									if (cc == 'l') {
										cc = getc(f);
										if (cc == 'e') {
											cc = getc(f);
											if (cc == ' ') {
												volatileCounter++;
											}
										}
									}
								}
							}
						}
					}

				}
			}


			//while arar
			if (cc == 'w')
			{
				cc = getc(f);
				if (cc == 'h')
				{
					cc = getc(f);
					if (cc == 'i') {
						cc = getc(f);
						if (cc == 'l') {
							cc = getc(f);
							if (cc == 'e') {
								cc = getc(f);
								if (cc == ' ' || cc == '(' || cc == '\n' || feof(f))
									whileCounter++;
							}
						}
					}

				}
			}
			

			if (cc == '{') {
				openBracketCounter += 1;
			}
			if (cc == '+') {
				additionCounter++;
				cc = getc(f);
				if (cc == '+') {
					additionCounter--;
					increaseCounter++;
				}
				if (cc == '=') {
					additionCounter--;
					equalityCounter--;
					addEqualityCounter++;
				}
			}

			if (cc == '-') {
				substractionCounter++;
				cc = getc(f);
				if (cc == '-') {
					substractionCounter--;
					decreaseCounter++;
				}

				if (cc == '>') {
					substractionCounter--;
					pointerAccessCounter++;
				}
				if (cc == '=') {
					substractionCounter--;
					equalityCounter--;
					minusEqualityCounter++;
				}
			}


			if (cc == '*') {
				multiplicationCounter += 1;
				cc = getc(f);
				if (cc == '=') {
					multiplicationCounter--;
					equalityCounter--;
					multipleEqualityCounter++;
				}
			}

			if (cc == '/') {
				divisonCounter += 1;
				cc = getc(f);
				if (cc == '=') {
					divisonCounter--;
					equalityCounter--;
					divideEqualityCounter++;
				}
			}

			if (cc == '%') {
				moduleCounter += 1;
				cc = getc(f);
				if (cc == '=') {
					moduleCounter--;
					equalityCounter--;
					percentEqualityCounter++;
				}
			}

			if (cc == '<') {
				smallerCounter += 1;
				cc = getc(f);
				if (cc == '<') {
					smallerCounter--;
					binaryShiftLeftCounter++;
				}

				if (cc == '=') {
					smallerCounter--;
					equalityCounter--;
					lesserEqualityCounter++;
				}

			}
			
			if (cc == '>') {
				greaterCounter += 1;
				cc = getc(f);
				if (cc == '>') {
					greaterCounter--;
					binaryShiftRightCounter++;
				}

				if (cc == '=') {
					greaterCounter--;
					equalityCounter--;
					greaterEqualityCounter++;
				}

			}

			if (cc == '?') {
				cc = getc(f);
				if (cc == ':') {
					retrunValueCounter++;
				}
			}

			if (cc == '~') {
				binaryOnesComplementCounter += 1;
			}

			if (cc == '^') {
				binaryXorCounter+= 1;
			}
			if (cc == '|') {
				binaryOrCounter += 1;
				cc = getc(f);
				if (cc == '|') {
					binaryOrCounter--;
					orCounter++;
				}
			}
			if (cc == '&') {
				binaryXorCounter += 1;
				cc = getc(f);
				if (cc == '&') {
					binaryXorCounter--;
					andCounter++;
				}

			}
			if (cc == '!') {
				notCounter += 1;
				cc = getc(f);
				if (cc == '=') {
					equalityCounter--;
					notCounter--;
					notEqualityCounter++;
				}
			}

			if (cc == '=') {
				equalityCounter += 1;
				cc = getc(f);
				if (cc == '=') {
					equalityCounter--;
					equalEqaulityCounter++;
				}
			}



		}
		if (j == 0) {

			cout << "MAIN.CPP>>>>" << endl;
			cout << "################# RESERVED WORDS #################" << endl;
			cout << "Path is :" << current_path << endl << endl;
			cout << "if: " << ifCounter << endl;
			cout << "while: " << whileCounter << endl;
			cout << "asm: " << asmCounter << endl;
			cout << "auto: " << autoCounter << endl;
			cout << "break: " << breakCounter << endl;
			cout << "case: " << caseCounter << endl;
			cout << "catch: " << catchCounter << endl;
			cout << "char: " << charCounter << endl;
			cout << "class: " << classCounter << endl;
			cout << "const: " << constCounter << endl;
			cout << "continue: " << continueCounter << endl;
			cout << "cout: " << coutCounter << endl;
			cout << "cin: " << cinCounter << endl;
			cout << "delete: " << deleteCounter << endl;
			cout << "default: " << defaultCounter << endl;
			cout << "do: " << doCounter << endl;
			cout << "double: " << doubleCounter << endl;
			cout << "else: " << elseCounter << endl;
			cout << "enum: " << enumCounter << endl;
			cout << "extern: " << externCounter << endl;
			cout << "float: " << floatCounter << endl;
			cout << "for: " << forCounter << endl;
			cout << "friend: " << friendCounter << endl;
			cout << "inline: " << inlineCounter << endl;
			cout << "goto: " << gotoCounter << endl;
			cout << "int: " << intCounter << endl;
			cout << "long: " << longCounter << endl;
			cout << "new: " << newCounter << endl;
			cout << "NULL: " << nullCounter << endl;
			cout << "operator: " << operatorCounter << endl;
			cout << "private: " << privateCounter << endl;
			cout << "protected: " << protectedCounter << endl;
			cout << "public: " << publicCounter << endl;
			cout << "register: " << registerCounter << endl;
			cout << "return: " << returnCounter << endl;
			cout << "short: " << shortCounter << endl;
			cout << "signed: " << signedCounter << endl;
			cout << "sizeof: " << sizeofCounter << endl;
			cout << "static: " << staticCounter << endl;
			cout << "struct: " << structCounter << endl;
			cout << "string: " << stringCounter << endl;
			cout << "switch: " << switchCounter << endl;
			cout << "template: " << templateCounter << endl;
			cout << "this: " << thisCounter << endl;
			cout << "throw: " << throwCounter << endl;
			cout << "try: " << tryCounter << endl;
			cout << "typedef: " << typedefCounter << endl;
			cout << "union: " << unionCounter << endl;
			cout << "unsigned: " << unsignedCounter << endl;
			cout << "virtual: " << virtualCounter << endl;
			cout << "void: " << voidCounter << endl;
			cout << "volatile: " << volatileCounter << endl;

			cout << "################# OPERATOR #################" << endl;
			cout << "{: " << openBracketCounter << endl;
			cout << "+: " << additionCounter << endl;
			cout << "-: " << substractionCounter << endl;
			cout << "*: " << multiplicationCounter << endl;
			cout << "/: " << divisonCounter << endl;
			cout << "%: " << moduleCounter << endl;
			cout << "++: " << increaseCounter << endl;
			cout << "--: " << decreaseCounter << endl;
			cout << "<: " << smallerCounter << endl;
			cout << ">: " << greaterCounter << endl;
			cout << "->: " << pointerAccessCounter << endl;
			cout << "?:: " << retrunValueCounter << endl;
			cout << ">>: " << binaryShiftRightCounter << endl;
			cout << "<<: " << binaryShiftLeftCounter << endl;
			cout << "~: " << binaryOnesComplementCounter << endl;
			cout << "^: " << binaryXorCounter << endl;
			cout << "|: " << binaryOrCounter << endl;
			cout << "&: " << binaryAndCounter << endl;
			cout << "!: " << notCounter << endl;
			cout << "||: " << orCounter << endl;
			cout << "&&: " << andCounter << endl;
			cout << "<=: " << lesserEqualityCounter << endl;
			cout << ">=: " << greaterEqualityCounter << endl;
			cout << "!=: " << notEqualityCounter << endl;
			cout << "==: " << equalEqaulityCounter << endl;
			cout << "%=: " << percentEqualityCounter << endl;
			cout << "/=: " << divideEqualityCounter << endl;
			cout << "*=: " << multipleEqualityCounter << endl;
			cout << "-=: " << minusEqualityCounter << endl;
			cout << "+=: " << addEqualityCounter << endl;
			cout << "=: " << equalityCounter << endl;






			cout << endl << endl;

			cout << "##################################" << endl;
			cout << "user defined: " << intCounter + charCounter + stringCounter + longCounter + doubleCounter + floatCounter + signedCounter + unsignedCounter << endl;
			cout << "total operator: " << openBracketCounter + additionCounter + substractionCounter + multiplicationCounter + divisonCounter + moduleCounter + increaseCounter + decreaseCounter + smallerCounter + greaterCounter + pointerAccessCounter + retrunValueCounter + binaryShiftRightCounter
				+ binaryShiftLeftCounter + binaryOnesComplementCounter + binaryXorCounter + binaryOrCounter + binaryAndCounter + notCounter + orCounter
				+ andCounter + lesserEqualityCounter + greaterEqualityCounter + notEqualityCounter + percentEqualityCounter + equalEqaulityCounter +
				divideEqualityCounter + multipleEqualityCounter + minusEqualityCounter + addEqualityCounter + equalityCounter << endl;
			cout << "total reserved word: " << ifCounter + whileCounter + asmCounter + autoCounter + breakCounter + caseCounter + catchCounter
				+ charCounter + classCounter + constCounter + continueCounter + coutCounter + cinCounter + deleteCounter + defaultCounter +
				doCounter + doubleCounter + elseCounter + enumCounter + externCounter + floatCounter + forCounter + friendCounter +
				inlineCounter + gotoCounter + intCounter + longCounter + newCounter + nullCounter + operatorCounter + privateCounter +
				protectedCounter + publicCounter + registerCounter + returnCounter + shortCounter + signedCounter + sizeofCounter +
				staticCounter + structCounter + stringCounter + switchCounter + templateCounter + thisCounter + throwCounter +
				tryCounter + typedefCounter + unionCounter + unsignedCounter + virtualCounter + voidCounter + volatileCounter << endl;
			cout << "Total is: " << ifCounter + whileCounter + asmCounter + autoCounter + breakCounter + caseCounter + catchCounter
				+ charCounter + classCounter + constCounter + continueCounter + coutCounter + cinCounter + deleteCounter + defaultCounter +
				doCounter + doubleCounter + elseCounter + enumCounter + externCounter + floatCounter + forCounter + friendCounter +
				inlineCounter + gotoCounter + intCounter + longCounter + newCounter + nullCounter + operatorCounter + privateCounter +
				protectedCounter + publicCounter + registerCounter + returnCounter + shortCounter + signedCounter + sizeofCounter +
				staticCounter + structCounter + stringCounter + switchCounter + templateCounter + thisCounter + throwCounter +
				tryCounter + typedefCounter + unionCounter + unsignedCounter + virtualCounter + voidCounter + volatileCounter + intCounter + charCounter + stringCounter + longCounter + doubleCounter + floatCounter + signedCounter + unsignedCounter
				+ openBracketCounter + additionCounter + substractionCounter + multiplicationCounter + divisonCounter + moduleCounter + increaseCounter + decreaseCounter + smallerCounter + greaterCounter + pointerAccessCounter + retrunValueCounter + binaryShiftRightCounter
				+ binaryShiftLeftCounter + binaryOnesComplementCounter + binaryXorCounter + binaryOrCounter + binaryAndCounter + notCounter + orCounter
				+ andCounter + lesserEqualityCounter + greaterEqualityCounter + notEqualityCounter + percentEqualityCounter + equalEqaulityCounter +
				divideEqualityCounter + multipleEqualityCounter + minusEqualityCounter + addEqualityCounter + equalityCounter << endl<<endl<<endl;







		}
		else {
		cout << "################# OTHER FILES #################" << endl;
			cout << "loaded modules is " << module_counter << endl;
			cout << "Path is :" << current_path << endl << endl;
			cout << "################# RESERVED WORDS #################"<<endl;
			cout << "if: " << ifCounter << endl;
			cout << "while: " << whileCounter << endl;
			cout << "asm: " << asmCounter << endl;
			cout << "auto: " << autoCounter << endl;
			cout << "break: " << breakCounter << endl;
			cout << "case: " << caseCounter << endl;
			cout << "catch: " << catchCounter << endl;
			cout << "char: " << charCounter << endl;
			cout << "class: " << classCounter << endl;
			cout << "const: " << constCounter << endl;
			cout << "continue: " << continueCounter << endl;
			cout << "cout: " << coutCounter << endl;
			cout << "cin: " << cinCounter << endl;
			cout << "delete: " << deleteCounter << endl;
			cout << "default: " << defaultCounter << endl;
			cout << "do: " << doCounter << endl;
			cout << "double: " << doubleCounter << endl;
			cout << "else: " << elseCounter << endl;
			cout << "enum: " << enumCounter << endl;
			cout << "extern: " << externCounter << endl;
			cout << "float: " << floatCounter << endl;
			cout << "for: " << forCounter << endl;
			cout << "friend: " << friendCounter << endl;
			cout << "inline: " << inlineCounter << endl;
			cout << "goto: " << gotoCounter << endl;
			cout << "int: " << intCounter << endl;
			cout << "long: " << longCounter << endl;
			cout << "new: " << newCounter << endl;
			cout << "NULL: " << nullCounter << endl;
			cout << "operator: " << operatorCounter << endl;
			cout << "private: " << privateCounter << endl;
			cout << "protected: " << protectedCounter << endl;
			cout << "public: " << publicCounter << endl;
			cout << "register: " << registerCounter << endl;
			cout << "return: " << returnCounter << endl;
			cout << "short: " << shortCounter << endl;
			cout << "signed: " << signedCounter << endl;
			cout << "sizeof: " << sizeofCounter << endl;
			cout << "static: " << staticCounter << endl;
			cout << "struct: " << structCounter << endl;
			cout << "string: " << stringCounter << endl;
			cout << "switch: " << switchCounter << endl;
			cout << "template: " << templateCounter << endl;
			cout << "this: " << thisCounter << endl;
			cout << "throw: " << throwCounter << endl;
			cout << "try: " << tryCounter << endl;
			cout << "typedef: " << typedefCounter << endl;
			cout << "union: " << unionCounter << endl;
			cout << "unsigned: " << unsignedCounter << endl;
			cout << "virtual: " << virtualCounter << endl;
			cout << "void: " << voidCounter << endl;
			cout << "volatile: " << volatileCounter << endl;

			cout << "################# OPERATOR #################" << endl;
			cout << "{: " << openBracketCounter << endl;
			cout << "+: " << additionCounter << endl;
			cout << "-: " << substractionCounter << endl;
			cout << "*: " << multiplicationCounter << endl;
			cout << "/: " << divisonCounter << endl;
			cout << "%: " << moduleCounter << endl;
			cout << "++: " << increaseCounter << endl;
			cout << "--: " << decreaseCounter << endl;
			cout << "<: " << smallerCounter << endl;
			cout << ">: " << greaterCounter << endl;
			cout << "->: " << pointerAccessCounter << endl;
			cout << "?:: " << retrunValueCounter << endl;
			cout << ">>: " << binaryShiftRightCounter << endl;
			cout << "<<: " << binaryShiftLeftCounter << endl;
			cout << "~: " << binaryOnesComplementCounter << endl;
			cout << "^: " << binaryXorCounter << endl;
			cout << "|: " << binaryOrCounter << endl;
			cout << "&: " << binaryAndCounter << endl;
			cout << "!: " << notCounter << endl;
			cout << "||: " << orCounter << endl;
			cout << "&&: " << andCounter << endl;
			cout << "<=: " << lesserEqualityCounter << endl;
			cout << ">=: " << greaterEqualityCounter << endl;
			cout << "!=: " << notEqualityCounter << endl;
			cout << "==: " << equalEqaulityCounter << endl;
			cout << "%=: " << percentEqualityCounter << endl;
			cout << "/=: " << divideEqualityCounter << endl;
			cout << "*=: " << multipleEqualityCounter << endl;
			cout << "-=: " << minusEqualityCounter << endl;
			cout << "+=: " << addEqualityCounter << endl;
			cout << "=: " << equalityCounter << endl;

		




			cout << endl << endl;

			cout << "##################################" << endl;
			cout << "user defined: " << intCounter+charCounter+stringCounter+longCounter+doubleCounter+floatCounter+signedCounter+unsignedCounter<<endl;
			cout << "total operator: " << openBracketCounter + additionCounter + substractionCounter + multiplicationCounter + divisonCounter + moduleCounter + increaseCounter + decreaseCounter + smallerCounter + greaterCounter + pointerAccessCounter + retrunValueCounter + binaryShiftRightCounter
				+ binaryShiftLeftCounter + binaryOnesComplementCounter + binaryXorCounter + binaryOrCounter + binaryAndCounter + notCounter + orCounter
				+ andCounter + lesserEqualityCounter + greaterEqualityCounter + notEqualityCounter + percentEqualityCounter + equalEqaulityCounter +
				divideEqualityCounter + multipleEqualityCounter + minusEqualityCounter + addEqualityCounter + equalityCounter << endl;
			cout << "total reserved word: " << ifCounter + whileCounter + asmCounter + autoCounter + breakCounter + caseCounter + catchCounter
				+ charCounter + classCounter + constCounter + continueCounter + coutCounter + cinCounter + deleteCounter + defaultCounter +
				doCounter + doubleCounter + elseCounter + enumCounter + externCounter + floatCounter + forCounter + friendCounter +
				inlineCounter + gotoCounter + intCounter + longCounter + newCounter + nullCounter + operatorCounter + privateCounter +
				protectedCounter + publicCounter + registerCounter + returnCounter + shortCounter + signedCounter + sizeofCounter +
				staticCounter + structCounter + stringCounter + switchCounter + templateCounter + thisCounter + throwCounter +
				tryCounter + typedefCounter + unionCounter + unsignedCounter + virtualCounter + voidCounter + volatileCounter<<endl;
			cout << "Total is: " << ifCounter + whileCounter + asmCounter + autoCounter + breakCounter + caseCounter + catchCounter
				+ charCounter + classCounter + constCounter + continueCounter + coutCounter + cinCounter + deleteCounter + defaultCounter +
				doCounter + doubleCounter + elseCounter + enumCounter + externCounter + floatCounter + forCounter + friendCounter +
				inlineCounter + gotoCounter + intCounter + longCounter + newCounter + nullCounter + operatorCounter + privateCounter +
				protectedCounter + publicCounter + registerCounter + returnCounter + shortCounter + signedCounter + sizeofCounter +
				staticCounter + structCounter + stringCounter + switchCounter + templateCounter + thisCounter + throwCounter +
				tryCounter + typedefCounter + unionCounter + unsignedCounter + virtualCounter + voidCounter + volatileCounter + intCounter + charCounter + stringCounter + longCounter + doubleCounter + floatCounter + signedCounter + unsignedCounter
				+ openBracketCounter + additionCounter + substractionCounter + multiplicationCounter + divisonCounter + moduleCounter + increaseCounter + decreaseCounter + smallerCounter + greaterCounter + pointerAccessCounter + retrunValueCounter + binaryShiftRightCounter
				+ binaryShiftLeftCounter + binaryOnesComplementCounter + binaryXorCounter + binaryOrCounter + binaryAndCounter + notCounter + orCounter
				+ andCounter + lesserEqualityCounter + greaterEqualityCounter + notEqualityCounter + percentEqualityCounter + equalEqaulityCounter +
				divideEqualityCounter + multipleEqualityCounter + minusEqualityCounter + addEqualityCounter + equalityCounter << endl;

		}


	}

	

	return 0;
}
