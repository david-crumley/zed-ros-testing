
(cl:in-package :asdf)

(defsystem "zed_map_on-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "start_3d_mapping" :depends-on ("_package_start_3d_mapping"))
    (:file "_package_start_3d_mapping" :depends-on ("_package"))
  ))