//Extra Part For GeneticsComponent.hpp
#ifdef EXTRA_INCLUDE_PART_GENETICSCOMPONENT
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct Gene {
    Gene() = delete;
    Gene(Gene const&) = delete;
    Gene(Gene const&&) = delete;
};

#endif
