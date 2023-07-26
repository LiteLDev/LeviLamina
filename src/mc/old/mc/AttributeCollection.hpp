/**
 * @file  AttributeCollection.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeCollection.
 *
 */
class AttributeCollection {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTECOLLECTION
public:
    class AttributeCollection& operator=(class AttributeCollection const &) = delete;
    AttributeCollection(class AttributeCollection const &) = delete;
    AttributeCollection() = delete;
#endif

public:
    /**
     * @symbol  ?hasAttribute\@AttributeCollection\@\@SA_NAEBVHashedString\@\@\@Z
     */
    MCAPI static bool hasAttribute(class HashedString const &);

//private:
    /**
     * @symbol  ?instance\@AttributeCollection\@\@CAAEAV1\@XZ
     */
    MCAPI static class AttributeCollection & instance();

private:

};