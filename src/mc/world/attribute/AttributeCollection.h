#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeCollection {

public:
    // prevent constructor by default
    AttributeCollection& operator=(AttributeCollection const&) = delete;
    AttributeCollection(AttributeCollection const&)            = delete;
    AttributeCollection()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?hasAttribute\@AttributeCollection\@\@SA_NAEBVHashedString\@\@\@Z
     */
    MCAPI static bool hasAttribute(class HashedString const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?instance\@AttributeCollection\@\@CAAEAV1\@XZ
     */
    MCAPI static class AttributeCollection& instance();
    // NOLINTEND
};
