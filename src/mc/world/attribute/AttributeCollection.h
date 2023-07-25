#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeCollection {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTECOLLECTION
public:
    AttributeCollection& operator=(AttributeCollection const&) = delete;
    AttributeCollection(AttributeCollection const&)            = delete;
    AttributeCollection()                                      = delete;
#endif

public:
    /**
     * @symbol ?hasAttribute\@AttributeCollection\@\@SA_NAEBVHashedString\@\@\@Z
     */
    MCAPI static bool hasAttribute(class HashedString const&);

    // private:
    /**
     * @symbol ?instance\@AttributeCollection\@\@CAAEAV1\@XZ
     */
    MCAPI static class AttributeCollection& instance();

private:
};
