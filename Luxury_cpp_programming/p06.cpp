#include <iostream>
#include <string>
#include "program.h"

namespace chapter02
{
	void main_06()
	{
		std::string password;
		std::string passwordRepeat;
		std::cout << "�� ��ȣ�� �Է��ϼ���>>";
		std::cin >> password;
		std::cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
		std::cin >> passwordRepeat;
		if (password == passwordRepeat)
			std::cout << "�����ϴ�" << std::endl;
	}
}

/*

�� ��ȣ�� �Է��ϼ���>>�Ķ���
�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>�Ķ���
�����ϴ�

*/