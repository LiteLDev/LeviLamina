//Extra Part For StackResultStorageEntity.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here


#else
// Add Member There
public:

inline class EntityContext& getStackRef() {
    return _getStackRef();
}

#endif
