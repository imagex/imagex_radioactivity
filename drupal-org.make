api = 2
core = 7.x

; Download contributed dependencies.
projects[radioactivity][type] = "module"
projects[radioactivity][subdir] = "contrib"
projects[radioactivity][version] = "2.8"
projects[radioactivity][patch][] = "https://raw.github.com/imagex/imagex_patches/7.x/contrib/radioactivity/1901472-radioactivity-revisions.patch"
