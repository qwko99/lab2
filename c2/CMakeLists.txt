INCLUDE_DIRECTORIES (lib)
ADD_EXECUTABLE ( main main.c lib/add.c lib/subtract.c lib/multiply.c lib/divide.c)

#Debug Option
SET ( CMAKE_BUILD_TYPE Debug )
SET ( CMAKE_BUILD_TYPE RelWithDebinfo )
