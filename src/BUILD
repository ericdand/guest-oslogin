cc_library(
    name = "utils",
    srcs = ["oslogin_utils.cc"],
    deps = [
        "@lib//:curl",
        "@lib//:json-c",
    ],
)

cc_test(
    name = "utils_test",
    size = "small",
    srcs = ["oslogin_utils_test.cc"],
    deps = [
        ":utils",
        "@com_google_googletest//:gtest_main",
    ],
)
