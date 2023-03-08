#pragma once

#include <array>
#include <memory>
#include <vector>

namespace entt {

    template <typename... TS>
    class SparseSet;
    template <typename TEntity>
    class SparseSet<TEntity> {
       public:
        struct Iterator {
            std::vector<TEntity> const* vec;
            std::size_t pos;
            Iterator(std::vector<TEntity> const&, std::size_t);
            Iterator& operator++();
            bool operator==(Iterator const&) const;
            bool operator!=(Iterator const&) const;
            TEntity operator*() const;
        };
        std::vector<TEntity> dense;
        std::vector<TEntity> sparse;
        SparseSet();

        static TEntity in_use();

        void construct(TEntity);
        bool fast(TEntity) const;
        bool has(TEntity) const;
        TEntity get(TEntity);
        Iterator begin() const;
        Iterator end() const;
        std::size_t extent() const;
        std::size_t size() const;

        virtual ~SparseSet();
        virtual void destroy(TEntity);
        virtual void reset();
    };

    template <typename TEntity, typename TComponent>
    class SparseSet<TEntity, TComponent> : public SparseSet<TEntity> {
        std::vector<TComponent> components;

       public:
        template <typename... PS>
        TComponent& construct(TEntity t, PS... ps) {
            SparseSet<TEntity>::construct(t);
            components.emplace_back(t, ps...);
            return components.back();
        }
        TComponent const& get(TEntity) const;

        virtual ~SparseSet() override;
        virtual void destroy(TEntity) override;
        virtual void reset() override;
    };

    template <typename TEntity, typename... PS>
    class View;
    template <typename TEntity, typename TComponent, typename... PS>
    class View<TEntity, TComponent, PS...> {
        char filler[0x200];

       public:
        View();
        void reset();

        typename SparseSet<TEntity>::Iterator begin() const;
        typename SparseSet<TEntity>::Iterator end() const;

        TComponent const& get(TEntity) const;
        TComponent& get(TEntity);
    };

    template <typename TEntity>
    class Registry {
       public:
        template <typename TComponent>
        class Pool : SparseSet<TEntity, TComponent> {
            std::vector<std::pair<entt::SparseSet<TEntity>*, bool (entt::Registry<TEntity>::*)(TEntity) const>> data;
            Pool();
            template <typename... PS>
            TComponent& construct(Registry&, TEntity t, PS... ps);

            virtual ~Pool() override;
            virtual void destroy(TEntity) override;
        };
        class Attachee;

        std::vector<std::unique_ptr<SparseSet<TEntity>>> handlers;
        std::vector<std::unique_ptr<SparseSet<TEntity>>> pools;
        std::vector<std::unique_ptr<Attachee>> tags;
        std::vector<TEntity> entities;
        std::size_t available{};
        TEntity next{};

        Registry();

        template <typename TComponent, typename... PS>
        TComponent& assign(TEntity, PS...);
        template <typename TComponent>
        SparseSet<TEntity> const& assure();
        TEntity create();
        void destroy(TEntity);
        template <typename Func>
        void each(Func func) const {
            if (available) {
                for (std::size_t i = tags.size(); i != 0; --i) {
                    TEntity temp{i - 1};
                    auto id = tags[temp];
                    TEntity target{((std::size_t)id) & 0xFFFFF};
                    if (temp == target)
                        func(id);
                }
            } else {
                for (std::size_t i = tags.size(); i != 0; --i) {
                    auto id = tags[i];
                    func(id);
                }
            }
        }

        template <typename TComponent>
        TComponent const& get(TEntity) const;
        template <typename... PS>
        bool has(TEntity) const;
        template <typename... PS>
        bool mangled() const;
        template <typename TComponent>
        SparseSet<TEntity> const& pool() const;
        template <typename TComponent>
        bool reset() const;

        bool valid(TEntity) const;
        template <typename... PS>
        View<TEntity, PS...> view();

        ~Registry();
    };

}  // namespace entt