//Extra Part For ActorDefinitionIdentifier.hpp
#ifdef EXTRA_INCLUDE_PART_ACTORDEFINITIONIDENTIFIER
// Include Headers or Declare Types Here
#include "../HashedString.hpp"

#else
// Add Member There
std::string ns;             // 0
std::string identifier;     // 32
std::string event;          // 64
std::string fullname;       // 96
HashedString canonicalHash; // 128

#endif
