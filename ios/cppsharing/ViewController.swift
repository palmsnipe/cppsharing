//
//  ViewController.swift
//  cppsharing
//
//  Created by Cyril Moralès on 24/11/15.
//  Copyright © 2015 Cyril Moralès. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        print("\(MyLib.hello())")
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

