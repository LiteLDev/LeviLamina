/**
 * @file  BlockGraphics.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockGraphics.
 *
 */
class BlockGraphics {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKGRAPHICS
public:
    class BlockGraphics& operator=(class BlockGraphics const &) = delete;
    BlockGraphics(class BlockGraphics const &) = delete;
    BlockGraphics() = delete;
#endif

public:
    /**
     * @hash   1209377566
     * @symbol ?getBlockShape@BlockGraphics@@QEBA?AW4BlockShape@@XZ
     */
    MCAPI enum class BlockShape getBlockShape() const;
    /**
     * @hash   -1127794021
     * @symbol ?getIconTexture@BlockGraphics@@QEBAAEBUTextureUVCoordinateSet@@H@Z
     */
    MCAPI struct TextureUVCoordinateSet const & getIconTexture(int) const;
    /**
     * @hash   419158398
     * @symbol ?isFullAndOpaque@BlockGraphics@@QEBA_NXZ
     */
    MCAPI bool isFullAndOpaque() const;
    /**
     * @hash   -589529589
     * @symbol ?SIZE_OFFSET@BlockGraphics@@2MB
     */
    MCAPI static float const SIZE_OFFSET;
    /**
     * @hash   1000996503
     * @symbol ?getForBlock@BlockGraphics@@SAPEBV1@AEBVBlock@@@Z
     */
    MCAPI static class BlockGraphics const * getForBlock(class Block const &);
    /**
     * @hash   -2144756587
     * @symbol ?getForBlock@BlockGraphics@@SAPEBV1@AEBVBlockLegacy@@@Z
     */
    MCAPI static class BlockGraphics const * getForBlock(class BlockLegacy const &);
    /**
     * @hash   -1926061128
     * @symbol ?isInitialized@BlockGraphics@@SA_NXZ
     */
    MCAPI static bool isInitialized();
    /**
     * @hash   -1716122133
     * @symbol ?mBlockLookupMap@BlockGraphics@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVBlockGraphics@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVBlockGraphics@@@std@@@2@@std@@A
     */
    MCAPI static class std::unordered_map<std::string, class BlockGraphics *, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class BlockGraphics *>>> mBlockLookupMap;
    /**
     * @hash   -1537090113
     * @symbol ?mDummyBlock@BlockGraphics@@2V?$unique_ptr@VBlockGraphics@@U?$default_delete@VBlockGraphics@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<class BlockGraphics> mDummyBlock;
    /**
     * @hash   1395107758
     * @symbol ?mOwnedBlocks@BlockGraphics@@2V?$vector@V?$unique_ptr@VBlockGraphics@@U?$default_delete@VBlockGraphics@@@std@@@std@@V?$allocator@V?$unique_ptr@VBlockGraphics@@U?$default_delete@VBlockGraphics@@@std@@@std@@@2@@std@@A
     */
    MCAPI static std::vector<std::unique_ptr<class BlockGraphics>> mOwnedBlocks;
    /**
     * @hash   1258220733
     * @symbol ?setAtlasItemManager@BlockGraphics@@SAXV?$shared_ptr@VAtlasItemManager@@@std@@@Z
     */
    MCAPI static void setAtlasItemManager(class std::shared_ptr<class AtlasItemManager>);

//protected:

//private:

protected:
    /**
     * @hash   50321192
     * @symbol ?mTerrainTextureAtlas@BlockGraphics@@1V?$weak_ptr@VAtlasItemManager@@@std@@A
     */
    MCAPI static class std::weak_ptr<class AtlasItemManager> mTerrainTextureAtlas;

private:
    /**
     * @hash   -1777947924
     * @symbol ?mBlockModelAccess@BlockGraphics@@0Vmutex@std@@A
     */
    MCAPI static class std::mutex mBlockModelAccess;
    /**
     * @hash   888807601
     * @symbol ?mBlocks@BlockGraphics@@0V?$unordered_map@IPEAVBlockGraphics@@U?$hash@I@std@@U?$equal_to@I@3@V?$allocator@U?$pair@$$CBIPEAVBlockGraphics@@@std@@@3@@std@@A
     */
    MCAPI static class std::unordered_map<unsigned int, class BlockGraphics *, struct std::hash<unsigned int>, struct std::equal_to<unsigned int>, class std::allocator<struct std::pair<unsigned int const, class BlockGraphics *>>> mBlocks;
    /**
     * @hash   638229091
     * @symbol ?mInitialized@BlockGraphics@@0_NA
     */
    MCAPI static bool mInitialized;
    /**
     * @hash   265559408
     * @symbol ?mModels@BlockGraphics@@0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@UModel@BlockGeometry@@U?$default_delete@UModel@BlockGeometry@@@std@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@UModel@BlockGeometry@@U?$default_delete@UModel@BlockGeometry@@@std@@@2@@std@@@2@@std@@A
     */
    MCAPI static class std::map<std::string, std::unique_ptr<struct BlockGeometry::Model>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<struct BlockGeometry::Model>>>> mModels;
    /**
     * @hash   1430813900
     * @symbol ?mTessellatedModels@BlockGraphics@@0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VTessellatedModel@BlockGeometry@@U?$default_delete@VTessellatedModel@BlockGeometry@@@std@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VTessellatedModel@BlockGeometry@@U?$default_delete@VTessellatedModel@BlockGeometry@@@std@@@2@@std@@@2@@std@@A
     */
    MCAPI static class std::map<std::string, std::unique_ptr<class BlockGeometry::TessellatedModel>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class BlockGeometry::TessellatedModel>>>> mTessellatedModels;

};