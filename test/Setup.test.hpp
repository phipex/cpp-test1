////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	Copyright (C) 2019 by Company Inc.
///
///	This file is part of the C++ Project project.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file						CppProject/Setup.test.hpp
///	@author						Bob Marley <bob@marley.com>
///	@date						15 May 2019

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <Global.test.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace cppproject
{
namespace test
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace global
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

std::string						someGlobalString ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Environment : public testing::Environment
{

	public:

								Environment									(	const	std::string&				aCommandLineArg						)
								:	commandLineArg_(aCommandLineArg)
		{

			if (commandLineArg_ != "")
			{
				global::someGlobalString										=		commandLineArg_ ;
			}
			else
			{
				global::someGlobalString										=		"World" ;
			}
			
		}

		virtual					~Environment								( )
		{

		}
		
		virtual void			SetUp										( )
		{

		}
		
		virtual void			TearDown									( )
		{

		}

	private:

		std::string				commandLineArg_ ;

} ;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////