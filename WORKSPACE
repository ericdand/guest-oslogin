load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

workspace(name = "guest-oslogin")

new_local_repository(
    name = "lib",
    build_file = "//lib/BUILD",
    path = "/usr/lib",
)

http_archive(
    name = "com_google_googletest",
    sha256 = "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855",
    strip_prefix = "googletest-1.14.0/",
    urls = ["https://github.com/google/googletest/archive/refs/tags/v1.14.0.tar.gz"],
)
