#include "ll/api/memory/Hook.h"
#include "mc/PackInfoData.hpp"
#include "mc/ResourcePacksInfoPacket.hpp"

#include "ll/core/Config.h"

LL_AUTO_TYPED_INSTANCE_HOOK(
    ResourcePacksInfoPacketCNDs,
    HookPriority::Normal,
    ResourcePacksInfoPacket,
    "?write@ResourcePacksInfoPacket@@UEBAXAEAVBinaryStream@@@Z",
    void,
    void* bs
) 
{
    for(auto urlpair:ll::globalConfig.ResourcePacksInfoPacketCNDs){
    this->mCDNUrls.push_back(urlpair);
    }
    return origin(bs);    
}