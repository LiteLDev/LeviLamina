#include "llapi/Global.h"
#include "llapi/mc/Core.hpp"
#include "liteloader/LiteLoader.h"
#include "llapi/mc/ResourcePack.hpp"
#include "llapi/mc/Pack.hpp"
#include "llapi/mc/ResourceLocation.hpp"
#include "llapi/mc/ResourcePackRepository.hpp"
#include "llapi/mc/Types.hpp"
#include "llapi/mc/SemVersion.hpp"
#include "llapi/mc/PackManifest.hpp"
#include "llapi/mc/ResourcePackStack.hpp"
#include "llapi/mc/PackSettingsFactory.hpp"
#include "llapi/mc/PackSettings.hpp"
#include "llapi/mc/PackInstance.hpp"
#include "llapi/mc/IResourcePackRepository.hpp"
#include "llapi/mc/PackIdVersion.hpp"
#include "llapi/mc/PackSourceReport.hpp"

namespace ModifyPack {
    vector<std::string> PackListCache;
}

THook(ResourcePack*, "??0ResourcePack@@QEAA@AEAVPack@@@Z",
      ResourcePack* self, Pack* a2) {
    auto Pack = original(self, a2);
    auto manifest = &Pack->getManifest();
    if (manifest && manifest->getPackOrigin() == PackOrigin::Dev) {
        ModifyPack::PackListCache.push_back(a2->getManifest().getIdentity().asString());
    }
    return Pack;
}

THook(std::unique_ptr<ResourcePackStack>,
      "?deserialize@ResourcePackStack@@SA?AV?$unique_ptr@VResourcePackStack@@U?$default_delete@VResourcePackStack@@@"
      "std@@@std@@AEAV?$basic_istream@DU?$char_traits@D@std@@@3@AEBV?$not_null@V?$NonOwnerPointer@$$"
      "CBVIResourcePackRepository@@@Bedrock@@@gsl@@@Z",
      std::istream* fileStream, gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository const>> const& a3) {
    auto Stack = original(fileStream, a3);
    for (auto id : ModifyPack::PackListCache) {
        auto Pack = Global<ResourcePackRepository>->getResourcePackForPackId(PackIdVersion::fromString(id));
        auto& SettingsFactory = Global<ResourcePackRepository>->getPackSettingsFactory();
        auto settings = SettingsFactory.getPackSettings(Pack->getManifest());
        char gsl[16];
        auto gslPath = SymCall("??$?0PEAVResourcePack@@X@?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@"
                               "QEAA@AEBV?$not_null@PEAVResourcePack@@@1@@Z",
                               void*, char*, ResourcePack**)(gsl, &Pack);
        char size[480];
        auto Instance =
            SymCall("??0PackInstance@@QEAA@V?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@H_"
                    "NPEAVPackSettings@@@Z",
                    PackInstance*, char*, void*, int, bool, PackSettings*)(size, gslPath, 0, false, settings);

        Stack->add(*Instance, a3, 0);
    }
    ModifyPack::PackListCache.clear();
    return Stack;
}