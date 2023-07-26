/**
 * @file  ResourceLoaders.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?EMPTY_STRING\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const EMPTY_STRING;
    /**
     * @symbol  ?IMGEXT_JPEG\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_JPEG;
    /**
     * @symbol  ?IMGEXT_JPG\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_JPG;
    /**
     * @symbol  ?IMGEXT_PNG\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_PNG;
    /**
     * @symbol  ?IMGEXT_TARGA\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_TARGA;
    /**
     * @symbol  ?IMGEXT_TEXTURESET\@ResourceLoaders\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const IMGEXT_TEXTURESET;
    /**
     * @symbol  ?backCompatGroup\@ResourceLoaders\@\@3VBackwardsCompatTextureGroup\@\@A
     */
    MCAPI extern class BackwardsCompatTextureGroup backCompatGroup;
    /**
     * @symbol  ?loaders\@ResourceLoaders\@\@3V?$map\@W4ResourceFileSystem\@\@V?$unique_ptr\@VResourceLoader\@\@U?$default_delete\@VResourceLoader\@\@\@std\@\@\@std\@\@U?$less\@W4ResourceFileSystem\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4ResourceFileSystem\@\@V?$unique_ptr\@VResourceLoader\@\@U?$default_delete\@VResourceLoader\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI extern class std::map<enum class ResourceFileSystem, std::unique_ptr<class ResourceLoader>, struct std::less<enum class ResourceFileSystem>, class std::allocator<struct std::pair<enum class ResourceFileSystem const, std::unique_ptr<class ResourceLoader>>>> loaders;
    /**
     * @symbol  ?supportedImageExtensions\@ResourceLoaders\@\@3V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI extern std::vector<std::string> const supportedImageExtensions;

};