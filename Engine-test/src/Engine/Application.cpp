#include "lpch.h"
#include "Application.h"


namespace Engine {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		std::cout << "Welcome to Engine!!!";
		WindowResizeEvent e(1200, 800);
		EG_TRACE(e);
		while (true)
		{

		}
	}

}
