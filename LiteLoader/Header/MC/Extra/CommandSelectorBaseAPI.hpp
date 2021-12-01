//Extra Part For CommandSelectorBase.hpp
#ifdef EXTRA_INCLUDE_PART_COMMANDSELECTORBASE
// Include Headers or Declare Types Here
#include "../ActorDefinitionIdentifier.hpp"

#else
// Add Member There
private:
uint32_t version;
uint32_t type;
uint32_t order;
std::vector<InvertableFilter<std::string>> nameFilters;
char pad_0040[24];
std::vector<InvertableFilter<ActorDefinitionIdentifier>> familyFilters;
std::vector<InvertableFilter<std::string>> tagFilters;
std::vector<std::function<bool(CommandOrigin const&, Actor const&)>> customFilters;
CommandPosition position;
BlockPos box;
float radiusMin;
float radiusMax;
uint64_t resultCount;
bool includeDeadPlayers;
char pad_0185[5];
bool playerOnly;
bool explicitIdSelector;

#endif
