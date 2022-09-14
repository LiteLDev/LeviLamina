#include <Global.h>
#include <MC/Core.hpp>
#include "LiteLoader.h"
#include <MC/ResourcePack.hpp>
#include <MC/Pack.hpp>
#include <MC/ResourceLocation.hpp>
#include <MC/ResourcePackRepository.hpp>
#include <MC/Types.hpp>
#include <MC/SemVersion.hpp>
#include <MC/PackManifest.hpp>
#include <MC/ResourcePackStack.hpp>
#include <MC/PackSettingsFactory.hpp>
#include <MC/PackSettings.hpp>
#include <MC/PackInstance.hpp>
#include <MC/IResourcePackRepository.hpp>
#include <MC/PackIdVersion.hpp>

namespace ModifyPack {
    vector<PackIdVersion> PackListCache;
}

THook(ResourcePack*, "??0ResourcePack@@QEAA@AEAVPack@@@Z",
      ResourcePack* self, Pack* a2) {
    auto Pack = original(self, a2);
        auto manifest = &Pack->getManifest();
        if (manifest && manifest->getPackOrigin() == PackOrigin::PackOrigin_Dev) {
            ModifyPack::PackListCache.push_back(a2->getManifest().getIdentity());  
        }
    return Pack;
}

THook(std::unique_ptr<ResourcePackStack>, "?deserialize@ResourcePackStack@@SA?AV?$unique_ptr@VResourcePackStack@@U?$default_delete@VResourcePackStack@@@std@@@std@@AEAV?$basic_istream@DU?$char_traits@D@std@@@3@AEBVIResourcePackRepository@@@Z",
      __int64 a2, ResourcePackRepository* a3) {	
    auto Stack = original( a2, a3);
    for (auto& id : ModifyPack::PackListCache) {
        auto Pack = a3->getResourcePackForPackId(id);
        auto& SettingsFactory = a3->getPackSettingsFactory();
        auto settings = SettingsFactory.getPackSettings(Pack->getManifest());
        char gsl[16];
        auto gslPath = SymCall("??$?0PEAVResourcePack@@X@?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@QEAA@AEBV?$not_null@PEAVResourcePack@@@1@@Z",
                           void*, char*, ResourcePack**)(gsl, &Pack);
        char size[480];
        auto Instance = SymCall("??0PackInstance@@QEAA@V?$not_null@V?$NonOwnerPointer@VResourcePack@@@Bedrock@@@gsl@@H_NPEAVPackSettings@@@Z",
                                PackInstance*, char*, void*, int, bool, PackSettings*)(size, gslPath, 0, false, settings);
        Stack->add(*Instance, *(IResourcePackRepository*)a3, 0);
    }
    ModifyPack::PackListCache.clear();
    return Stack;
}