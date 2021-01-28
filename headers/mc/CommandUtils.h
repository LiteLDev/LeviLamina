#pragma once
#error "dont use this broken header directly,CommandUtils is a namespace"
#include"Core.h"
namespace CommandUtils{
	MCINLINE class Actor *  spawnEntityAt(class BlockSource & a0,class Vec3 const & a1,struct ActorDefinitionIdentifier const & a2,struct ActorUniqueID & a3,class Actor * a4){
class Actor * (CommandUtils::*rv)(class BlockSource &,class Vec3 const &,struct ActorDefinitionIdentifier const &,struct ActorUniqueID &,class Actor *); *((void**)&rv) = dlsym("?spawnEntityAt@CommandUtils@@YAPEAVActor@@AEAVBlockSource@@AEBVVec3@@AEBUActorDefinitionIdentifier@@AEAUActorUniqueID@@PEAV2@@Z"); return (this->*rv)(a0,a1,a2,a3,a4);}
	MCINLINE bool  createMapData(class Actor & a0,class ItemInstance & a1,class CommandOutput & a2){
bool (CommandUtils::*rv)(class Actor &,class ItemInstance &,class CommandOutput &); *((void**)&rv) = dlsym("?createMapData@CommandUtils@@YA_NAEAVActor@@AEAVItemInstance@@AEAVCommandOutput@@@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE void  alterSpawnableEntities(class LevelData & a0,struct ActorDefinitionIdentifier const & a1,struct ActorDefinitionIdentifier & a2){
void (CommandUtils::*rv)(class LevelData &,struct ActorDefinitionIdentifier const &,struct ActorDefinitionIdentifier &); *((void**)&rv) = dlsym("?alterSpawnableEntities@CommandUtils@@YAXAEAVLevelData@@AEBUActorDefinitionIdentifier@@AEAU3@@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >  toJsonResult(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & a0,class Json::Value const & a1){
class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > (CommandUtils::*rv)(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Json::Value const &); *((void**)&rv) = dlsym("?toJsonResult@CommandUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBVValue@Json@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE void  clearBlockEntityContents(class BlockSource & a0,class BlockPos const & a1){
void (CommandUtils::*rv)(class BlockSource &,class BlockPos const &); *((void**)&rv) = dlsym("?clearBlockEntityContents@CommandUtils@@YAXAEAVBlockSource@@AEBVBlockPos@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE class Vec3  getFeetPos(class Actor const * a0){
class Vec3 (CommandUtils::*rv)(class Actor const *); *((void**)&rv) = dlsym("?getFeetPos@CommandUtils@@YA?AVVec3@@PEBVActor@@@Z"); return (this->*rv)(a0);}
	MCINLINE class BlockPos  getFeetBlockPos(class Actor const * a0){
class BlockPos (CommandUtils::*rv)(class Actor const *); *((void**)&rv) = dlsym("?getFeetBlockPos@CommandUtils@@YA?AVBlockPos@@PEBVActor@@@Z"); return (this->*rv)(a0);}
	MCINLINE bool  addItemInstanceComponents(class ItemInstance & a0,class Json::Value const & a1,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & a2){
bool (CommandUtils::*rv)(class ItemInstance &,class Json::Value const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &); *((void**)&rv) = dlsym("?addItemInstanceComponents@CommandUtils@@YA_NAEAVItemInstance@@AEBVValue@Json@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE class Player const *  getOriginPlayer(class CommandOrigin const & a0){
class Player const * (CommandUtils::*rv)(class CommandOrigin const &); *((void**)&rv) = dlsym("?getOriginPlayer@CommandUtils@@YAPEBVPlayer@@AEBVCommandOrigin@@@Z"); return (this->*rv)(a0);}
	MCINLINE bool  isPlayerSpawnedMob(class Actor * a0,class Actor * a1){
bool (CommandUtils::*rv)(class Actor *,class Actor *); *((void**)&rv) = dlsym("?isPlayerSpawnedMob@CommandUtils@@YA_NPEAVActor@@0@Z"); return (this->*rv)(a0,a1);}

#if 0
	MCINLINE class std::vector<class ItemStack,class std::allocator<class ItemStack> >  createItemStacks(class ItemInstance const & a0,int a1,int & a2){
class std::vector<class ItemStack,class std::allocator<class ItemStack> > (CommandUtils::*rv)(class ItemInstance const &,int,int &); *((void**)&rv) = dlsym("?createItemStacks@CommandUtils@@YA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemInstance@@HAEAH@Z"); return (this->*rv)(a0,a1,a2);}
	MCINLINE class std::vector<enum ActorType,class std::allocator<enum ActorType> >  getInvalidCommandEntities(){
class std::vector<enum ActorType,class std::allocator<enum ActorType> > (CommandUtils::*rv)(); *((void**)&rv) = dlsym("?getInvalidCommandEntities@CommandUtils@@YA?AV?$vector@W4ActorType@@V?$allocator@W4ActorType@@@std@@@std@@XZ"); return (this->*rv)();}
//   bad fun  

	MCINLINE class ItemStack  createItemStack(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & a0,int a1,int a2){
class ItemStack (CommandUtils::*rv)(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int,int); *((void**)&rv) = dlsym("?createItemStack@CommandUtils@@YA?AVItemStack@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z"); return (this->*rv)(a0,a1,a2);}
#endif
};
