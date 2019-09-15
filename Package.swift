// swift-tools-version:5.1
import PackageDescription

let package = Package(
    name: "Blindside",
    products: [
        .library(
            name: "Blindside",
            targets: ["Blindside"]
        ),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "Blindside"
        ),
    ]
)