#pragma once
#include "ZZW.h"
#ifdef ZZW_PALTFORM_WINDOWS
extern ZZW::Application*  ZZW::CreateApplication();
int main(int argc,char** argv)
{
	auto app = ZZW::CreateApplication();
	app->Run();
	delete app;
}
#endif // ZZW_PALTFORM_WINDOWS
