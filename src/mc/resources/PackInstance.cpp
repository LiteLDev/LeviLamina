#include "mc/resources/PackInstance.h"
#include "mc/resources/ResourcePack.h"

bool PackInstance::getResource(::Core::Path const& resourceName, ::std::string& resourceStream) const {
    return mPack->getResource(resourceName, resourceStream, mSubpackIndex);
}
