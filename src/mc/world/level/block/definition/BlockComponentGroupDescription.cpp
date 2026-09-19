#include "mc/world/level/block/definition/BlockComponentGroupDescription.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

BlockComponentDescription* BlockComponentGroupDescription::getComponentDescription(::std::string const& name) const {
    for (auto const& description : mDescriptions.get()) {
        if (description->getName() == name) {
            return description.get();
        }
    }
    return nullptr;
}
