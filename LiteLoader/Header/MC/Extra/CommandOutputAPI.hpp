//Extra Part For CommandOutput.hpp
#ifdef EXTRA_INCLUDE_PART_COMMANDOUTPUT
// Include Headers or Declare Types Here

#else
// Add Member There
public:
	LIAPI void addMessage(std::string str);
	LIAPI void success(const string& str);
	LIAPI void error(const string& str);

#endif
