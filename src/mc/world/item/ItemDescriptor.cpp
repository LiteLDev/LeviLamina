#include "mc/world/item/ItemDescriptor.h"

ItemDescriptor& ItemDescriptor::operator=(ItemDescriptor const& rhs) {
    if (this != &rhs) {
        mImpl = rhs.mImpl ? rhs.mImpl->clone() : nullptr;
    }
    return *this;
}
