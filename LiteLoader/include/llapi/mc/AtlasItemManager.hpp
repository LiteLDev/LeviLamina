/**
 * @file  AtlasItemManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AtlasItemManager.
 *
 */
class AtlasItemManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATLASITEMMANAGER
public:
    class AtlasItemManager& operator=(class AtlasItemManager const &) = delete;
    AtlasItemManager(class AtlasItemManager const &) = delete;
    AtlasItemManager() = delete;
#endif

public:
    /**
     * @hash   -1537538007
     * @symbol ?getTextureItem@AtlasItemManager@@QEBAAEBVTextureAtlasItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class TextureAtlasItem const & getTextureItem(std::string const &) const;

};