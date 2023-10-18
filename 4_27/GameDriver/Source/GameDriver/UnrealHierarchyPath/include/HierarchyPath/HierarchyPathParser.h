#pragma once
#include "Common.h"
#include "HNode.h"
class HierarchyPathParser
{
public:
	GAMEDRIVER_API static HNode* Parse(String query,std::list<XPathParserException*>* exceptions);
private:

};

