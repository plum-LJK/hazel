#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	/*Hgame::Log::Init();
	Hgame::Log::GetCoreLogger()->warn("Init Log!");
	Hgame::Log::GetClientLogger()->info("hello");
	*/


	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif // HG_PLATFORM_WINDOWS

