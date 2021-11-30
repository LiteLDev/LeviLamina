//Extra Part For CommandParameterData.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here
#include "CommandRegistry.hpp"
#include <string_view>

enum class CommandParameterDataType {
	NORMAL,
	ENUM,
	SOFT_ENUM
};

class CommandRegistry;

//template <typename T>
class typeid_CommandRegistry {
public:
	unsigned short value;
	typeid_CommandRegistry(typeid_CommandRegistry const& id) : value(id.value) {}
	typeid_CommandRegistry(unsigned short value) : value(value) {}
};

#else
// Add Member There
public:
	typeid_CommandRegistry tid;  // 0
	void* parser; // 8
	std::string name;               // 16
	char const* desc;               // 48
	int unk56;                      // 56
	CommandParameterDataType type;  // 60
	int offset;                     // 64
	int flag_offset;                // 68
	bool mand;                      // 72
	bool pad73;                     // 73

	CommandParameterData::CommandParameterData()
		: tid(0)
	{}

	CommandParameterData::CommandParameterData(
		typeid_CommandRegistry tid, void* parser, std::string_view describe,
		CommandParameterDataType type, char const* enumName, int offset, bool optional, int flag_offset)

		: tid(tid), parser(parser), name(describe), desc(enumName), unk56(-1), type(type),
		offset(offset), flag_offset(flag_offset), mand(optional), pad73(false)
	{}

#endif
