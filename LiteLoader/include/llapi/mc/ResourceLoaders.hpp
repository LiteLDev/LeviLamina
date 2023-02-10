/**
 * @file  ResourceLoaders.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ResourceLoaders.
 *
 */
namespace ResourceLoaders {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -197509565
     * @symbol  ?EMPTY_STRING\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const EMPTY_STRING;
    /**
     * @hash   -829108895
     * @symbol  ?IMGEXT_JPEG\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_JPEG;
    /**
     * @hash   -1851575165
     * @symbol  ?IMGEXT_JPG\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_JPG;
    /**
     * @hash   -41082013
     * @symbol  ?IMGEXT_PNG\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_PNG;
    /**
     * @hash   1035542595
     * @symbol  ?IMGEXT_TARGA\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_TARGA;
    /**
     * @hash   -1295872927
     * @symbol  ?IMGEXT_TEXTURESET\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_TEXTURESET;
    /**
     * @hash   -1662902853
     * @symbol  ?backCompatGroup\@ResourceLoaders\@\@3VBackwardsCompatTextureGroup\@\@A
     */
    MCAPI extern class BackwardsCompatTextureGroup backCompatGroup;
    /**
     * @hash   160864001
     * @symbol  ?loaders\@ResourceLoaders\@\@3V?$map\@W4ResourceFileSystem\@\@V?$unique_ptr\@VResourceLoader\@\@U?$default_delete\@VResourceLoader\@\@\@std\@\@\@std\@\@U?$less\@W4ResourceFileSystem\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4ResourceFileSystem\@\@V?$unique_ptr\@VResourceLoader\@\@U?$default_delete\@VResourceLoader\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI extern class std::map<enum class ResourceFileSystem, std::unique_ptr<class ResourceLoader>, struct std::less<enum class ResourceFileSystem>, class std::allocator<struct std::pair<enum class ResourceFileSystem const, std::unique_ptr<class ResourceLoader>>>> loaders;
    /**
     * @hash   -1499272080
     * @symbol  ?supportedImageExtensions\@ResourceLoaders\@\@3V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI extern std::vector<std::string> const supportedImageExtensions;

};