# LearnCpp
изучаю С++


# Как собрать проект
```bash
mkdir build
```
```bash
cd build
```
```bash
cmake ..
```
```bash
cmake --build .  
```

## Правильность оформления коммитов

`feat`: добавить функцию сортировки массива

`fix`: исправить ошибку с индексами

`docs`: обновить документацию


## Система сборки CMake
`CMakeLists.txt` - Это файл для описания шагов сборки

`cmake_minimum_required` - Минимальная версия CMake для запуска сборки

`project` - Название проекта

`set(CMAKE_CXX_STANDARD 17)` - Стандарт C++

`add_executable` - Создание исполняемого файла из main.cpp

## Github Actions

`name` - Название Actions

`on:` - при каких случаях он будет запускаться


#### Удаление тэга локально и на сервере
```bash
git tag -d main
git push origin :refs/tags/main
```

