/**
 * @file  InventorySource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InventorySource.
 *
 */
class InventorySource {

#define AFTER_EXTRA
// Add Member There
public:
    enum class InventorySourceFlags
    {
        NoFlag = 0,
        WorldInteraction_Random = 1
    };

    InventorySourceType type = InventorySourceType::Invalid;
    ContainerID container = ContainerID::Invalid;
    InventorySourceFlags flags;
    inline InventorySource(ContainerID id)
        : container(id)
    {
    }
    inline InventorySource(InventorySourceType type)
        : type(type)
    {
    }
    inline InventorySource(InventorySourceType type, InventorySourceFlags flags)
        : type(type)
        , flags(flags)
    {
    }
    inline InventorySource(InventorySourceType type, ContainerID id)
        : type(type)
        , container(id)
    {
    }


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYSOURCE
public:
    class InventorySource& operator=(class InventorySource const &) = delete;
    InventorySource(class InventorySource const &) = delete;
    InventorySource() = delete;
#endif

public:
    /**
     * @symbol  ??8InventorySource\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class InventorySource const &) const;
    /**
     * @symbol  ?toString\@InventorySource\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;

};