inchazel = include_directories('../libhazel/include', '../libhazel/vendor/spdlog/include')

dep = declare_dependency(link_with : libhazel, include_directories : inchazel)

executable('sandboxapp', 'sandboxapp.cpp', dependencies : dep) 
